// ﷽
// Contest: Codeforces Round 1007 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2071/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 28 Feb 2025 10:22:17 PM EET
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
#define inf 2e9
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
  int n, st, en;
  cin >> n >> st >> en;

  vector<vi> adj(n);
  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  vector<int> d(n, inf);
  function<void(int, int, int)> dfs = [&](int node, int p, int i) {
    for (auto u : adj[node]) {
      if (u == p)
        continue;
      dfs(u, node, i + 1);
    }
    d[node] = i;
  };

  dfs(en - 1, -1, 0);

  vector<pair<int, int>> vec;
  for (int i = 0; i < n; ++i) {
    vec.push_back({i, d[i]});
  }
  sort(all(vec), [&](pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second;
  });

  for (auto &[a, b] : vec) {
    cout << a + 1 << ' ';
  }
  debug(vec);
  cout << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
