// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1666
// Memory Limit: 512
// Time Limit: 1000
// Start: Mon 25 Mar 2024 07:15:57 AM EET
//
#include <bits/stdc++.h>
#include <random>
#include <string>
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
vector<bool> visited;
vector<vector<int>> adj;
int cnt = 0;
void dfs(int node) {
  visited[node] = true;
  // cout << node << " " << visited[node] << endl;
  for (auto &na : adj[node])
    if (!visited[na])
      dfs(na);
}
void solve() {
  int n, m;
  cin >> n >> m;
  adj.resize(n);
  visited.resize(n + 1, false);
  for (int i = 0; i < m; ++i) {
    int a, b; // nodes
    cin >> a >> b;
    a--, b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  vector<int> res;
  for (int i = 0; i < n; ++i) {
    if (!visited[i]) {
      dfs(i);
      if (cnt >= 1) {
        res.push_back(i);
        res.push_back(i + 1);
      }
      cnt++;
    }
  }
  cout << cnt - 1 << endl;
  cout << res << endl;
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
