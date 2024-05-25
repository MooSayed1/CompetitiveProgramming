// ﷽
// Contest: Codeforces Beta Round 94 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/129/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 13 May 2024 11:18:14 AM EEST
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
const int OO = (int)1e8;

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
vector<set<int>> adj;

void solve() {
  int n, m;
  cin >> n >> m;
  adj.resize(n);
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    adj[a].insert(b);
    adj[b].insert(a);
  }
  int cnt = 0;
  while (true) {
    vi group;
    group.clear();
    for (int i = 0; i < n; ++i) {
      if (adj[i].size() == 1) {
        group.pb(i);
      }
    }

    for (auto &it : group) {
      int x = *adj[it].begin();
      adj[it].clear();
      adj[x].erase(it);
    }
    if (group.size())
      ++cnt;
    else
      break;
  }
  cout << cnt << endl;
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
