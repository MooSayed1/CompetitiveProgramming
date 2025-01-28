// ﷽
// Contest: Codeforces Round 943 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1968/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 02 May 2024 06:04:01 PM EEST
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
vector<vector<int>> adj;
vi visited;
void dfs(int node) {
  if (visited[node])
    return;
  visited[node] = true;
  for (auto &it : adj[node]) {
    dfs(it);
  }
}
void solve() {
  int n;
  cin >> n;
  adj.resize(n);
  visited.resize(n);

  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
  return 0;
}
