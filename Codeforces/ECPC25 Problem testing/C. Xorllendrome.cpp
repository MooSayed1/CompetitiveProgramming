#include <bits/stdc++.h>
using namespace std;

vector<int> findOriginalArray(const vector<int>& arr) {
    int N2 = arr.size();
    unordered_map<long long,int> cnt;
    cnt.reserve(N2*2);
    for (long long x : arr) 
        ++cnt[x];

    vector<int> original;
    original.reserve(N2/2);

    // ————— Handle zeros specially —————
    // 0 doubles to 0, so we need an even count of them
    if (cnt[0] % 2) 
        return {};                  // odd number of zeros → invalid
    int zeroPairs = cnt[0] / 2;
    for (int i = 0; i < zeroPairs; i++) 
        original.push_back(0);
    cnt[0] = 0;

    // ————— Build the “doubling” graph —————
    // Each x → 2*x edge, indegree track
    unordered_map<long long,vector<long long>> adj;
    unordered_map<long long,int> indegree;
    adj.reserve(cnt.size());
    indegree.reserve(cnt.size());
    for (auto &p : cnt) {
        long long x = p.first;
        if (x == 0) continue;
        // ensure every key shows up in indegree
        indegree[x] = 0;
    }
    for (auto &p : cnt) {
        long long x = p.first;
        if (x == 0) continue;
        long long y = x * 2;
        if (cnt.count(y)) {
            adj[x].push_back(y);
            ++indegree[y];
        }
    }

    // ————— Initialize queue with indegree==0 nodes —————
    queue<long long> q;
    for (auto &p : indegree) {
        if (p.second == 0)
            q.push(p.first);
    }

    // ————— Peel in topological order —————
    while (!q.empty()) {
        long long x = q.front(); 
        q.pop();

        // match every x with a 2*x
        while (cnt[x] > 0) {
            if (cnt[2*x] == 0) 
                return {};          // missing a double → invalid
            original.push_back((int)x);
            --cnt[x];
            --cnt[2*x];
        }

        // once x is fully used, free its children
        for (long long y : adj[x]) {
            if (--indegree[y] == 0)
                q.push(y);
        }
    }

    // ————— Final check —————    
    // if any count remains, it's invalid
    for (auto &p : cnt) {
        if (p.second != 0)
            return {};
    }
    return original;
}

int main() {
    vector<int> arr = {16,16,16,8,8,8,4,4,4,2,2,2};
    auto orig = findOriginalArray(arr);
    if (orig.empty()) {
        cout << "Invalid input\n";
    } else {
        cout << "Original array: ";
        for (int x : orig) 
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
