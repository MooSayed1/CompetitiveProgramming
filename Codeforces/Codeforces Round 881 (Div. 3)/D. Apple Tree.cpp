// ﷽
// Contest: Codeforces Round 881 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1843/D
// Memory Limit: 512
// Time Limit: 4000
// Start: Thu 06 Jun 2024 05:43:14 AM EEST
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
#define pii pair<int, int>
#define OO 2e9
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
vector<vector<int>> adj;
vector<int> leaf;

void dfs(int node, int parent) {
  if (adj[node].size() == 1 && node != 1) {
    leaf[node] = 1;
    return;
  }

  leaf[node] = 0;
  for (int neighbor : adj[node]) {
    if (neighbor != parent) {
      dfs(neighbor, node);
      leaf[node] += leaf[neighbor];
    }
  }
}

void solve() {
  int n;
  cin >> n;
  adj.assign(n + 1, vector<int>());
  leaf.assign(n + 1, 0);
  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    cin >> a >> b;
    adj[a].emplace_back(b);
    adj[b].emplace_back(a);
  }

  dfs(1, -1);
  int q;
  cin >> q;
  while (q--) {
    int x, y;
    cin >> x >> y;
    cout << 1LL * leaf[x] * leaf[y] << '\n';
  }
}
int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
