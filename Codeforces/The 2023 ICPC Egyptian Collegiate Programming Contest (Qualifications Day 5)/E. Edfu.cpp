// ﷽
// Contest: The 2023 ICPC Egyptian Collegiate Programming Contest (Qualifications Day 5)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/530046/problem/E
// Memory Limit: 256
// Time Limit: 3000
// Start: Fri 05 Jul 2024 05:45:48 PM EEST
//
#include <bits/stdc++.h>
using namespace std;
#ifdef MOHAMED
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int,int>
#define OO 2e9
#define endl "\n"
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

const int MAXN = 100005;
int n, q;
char letters[MAXN];
vector<int> tree[MAXN];
int parent[MAXN], depth[MAXN];

void bfs(int root) {
    queue<int> q;
    q.push(root);
    depth[root] = 0;
    parent[root] = -1;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (int neighbor : tree[node]) {
            if (neighbor != parent[node]) {
                depth[neighbor] = depth[node] + 1;
                parent[neighbor] = node;
                q.push(neighbor);
            }
        }
    }
}

vector<int> get_path(int u, int v) {
    vector<int> path_u, path_v;
    while (u != -1) {
        path_u.push_back(u);
        u = parent[u];
    }
    while (v != -1) {
        path_v.push_back(v);
        v = parent[v];
    }
    reverse(path_u.begin(), path_u.end());
    reverse(path_v.begin(), path_v.end());
    
    // Remove common prefix
    int lca_depth = 0;
    while (lca_depth < path_u.size() && lca_depth < path_v.size() && path_u[lca_depth] == path_v[lca_depth]) {
        lca_depth++;
    }
    
    vector<int> path;
    for (int i = path_u.size() - 1; i >= lca_depth; --i) {
        path.push_back(path_u[i]);
    }
    for (int i = lca_depth - 1; i < path_v.size(); ++i) {
        path.push_back(path_v[i]);
    }
    return path;
}

bool is_palindrome(const vector<int>& path) {
    int l = 0, r = path.size() - 1;
    while (l < r) {
        if (letters[path[l++]] != letters[path[r--]]) {
            return false;
        }
    }
    return true;
}

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> letters[i];
    }

    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    bfs(1);

    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        vector<int> path = get_path(u, v);
        cout << (is_palindrome(path) ? "1" : "0") << '\n';
    }
}

int main() {
    solve();
    return 0;
}
