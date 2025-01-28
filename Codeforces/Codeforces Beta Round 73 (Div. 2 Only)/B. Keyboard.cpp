// ﷽
// Contest: Codeforces Beta Round 73 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/88/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 01 May 2024 01:25:32 AM EEST
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
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define OO 1e8
#define endl "\n"

template <typename T>
istream &operator>>(istream &input, vector<T> &data) {
    for (T &x : data) input >> x;
    return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {
    for (const T &x : data) output << x << " ";
    return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
    ll n, m, x;
    cin >> n >> m >> x;
    int cnt = 0;
    bool flag = 0;
    char arr[n][m];
    multimap<char, pair<int, int>> mp;
    vector<pair<int, int>> ss;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 'S') {
                flag = 1;
                ss.emplace_back(i, j);
            } else
                mp.insert({arr[i][j], {i, j}});
        }
    }

    vi frq(26,0);
    ll ans;
    cnt = 0;
    ll len;
    cin >> len;
    string s;
    cin >> s;
    for (char it : s) {

        char ch = tolower(it);

        if (mp.find(ch) == mp.end()) {
            debug(it);
            cout << -1 << endl;
            return;
        }

        if (isupper(it)) {

            if (!flag) {
                cout << -1 << endl;
                return;
            }

            if (frq[ch - 'a'] == 1)
                continue;
            else if (frq[ch - 'a'] == -1) {
                cnt++;
                continue;
            }
            auto range = mp.equal_range(ch);

            for (auto cc = range.first; cc != range.second;++cc) {  // to check if shitty char fre more that one
                ans = 2e18;
                int row = cc->second.first;
                // debug(cc->first);
                int col = cc->second.second;

                for (auto &i : ss) {
                    // int dis = abs(row - i.first) + abs(col - i.second);
                    ll dis = (row - i.first) * (row-i.first) + (col - i.second) * (col - i.second);

                    ans = min(dis, ans);
                    if (ans <= x*x){
                        frq[ch-'a'] = 1;
                        goto P;
                    };

                    debug(ans);
                }
            }
            frq[ch-'a']=-1;
            cnt++;
            P:
        }
    }
    cout << cnt;
}
int32_t main() {
    //  freopen("whereami.in", "r", stdin);
    //  freopen("whereami.out", "w", stdout);
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
