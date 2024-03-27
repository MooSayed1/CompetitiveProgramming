// ﷽
// Contest: Codeforces Round 133 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/216/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 21 Mar 2024 11:22:16 PM EET
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
#define endl "\n"

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

vector<bool> vis;
vector<vector<int>> adj;

int dfs(int cur_node, int par_node, int &nodes_cnt) {
  if (vis[cur_node])
    return 1;

  vis[cur_node] = 1;

  for (auto child_node : adj[cur_node])
    if (child_node != par_node) {
      ++nodes_cnt;

      if (dfs(child_node, cur_node, nodes_cnt) == 1)
        return 1;
    }
  return 0;
}
void solve() {
  int n, m;
  cin >> n >> m;
  adj.resize(n + 1);
  vis.resize(n + 1);
  for (int i = 0; i < m; ++i) {
    int v, ver;
    cin >> v >> ver;
    adj[v].push_back(ver);
    adj[ver].push_back(v);
  }
  int toRemove = 0;
  for (int i = 1; i <= n; ++i) {
    if (!vis[i]) {
      int cnt = 0;
      int solve = dfs(i, -1, cnt);
      if (solve == 1)
        toRemove += (cnt % 2 == 1);
    }
  }
  if ((n - toRemove) % 2 == 1)
    toRemove++;
  cout << toRemove;
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
