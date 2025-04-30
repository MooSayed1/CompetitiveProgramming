// ﷽
// Contest: Codeforces Round 286 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/505/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 03 Mar 2025 01:01:58 AM EET
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

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;

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

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> adj(n + 1);
  vector<vector<bitset<105>>> colors(n + 1, vector<bitset<105>>(n + 1));
  int a, b, c;
  for (int i = 0; i < m; ++i) {
    cin >> a >> b >> c;
    adj[a].push_back(b);
    adj[b].push_back(a);

    colors[a][b].set(c);
    colors[b][a].set(c);
  }

  int q;
  cin >> q;
  debug(q);
  while (q--) {
    cin >> a >> b;
    int ans = 0;

    for (int i = 1; i <= 100; ++i) {
      int f = 0;
      vector<bool> vis(n + 1);

      function<bool(int)> dfs = [&](int node) -> bool {
        if (node == b) {
          return true;
        }
        vis[node] = 1;
        bool ans = 0;
        for (auto u : adj[node]) {
          if (!vis[u] && colors[node][u].test(i)) {
            ans |= dfs(u);
            if (ans)
              break;
          }
        }
        return ans;
      };
      ans += dfs(a);
    }
    cout << ans << endl;
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  // cin>>t;
  while (t--)
    solve();
  return 0;
}
