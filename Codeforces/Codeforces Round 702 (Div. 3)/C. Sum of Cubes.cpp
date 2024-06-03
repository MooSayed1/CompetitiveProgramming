// ﷽
// Contest: Codeforces Round 702 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1490/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 01 Jun 2024 04:11:22 AM EEST
//
#include <bits/stdc++.h>

#include <algorithm>
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
#define OO 1e12
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
vector<ll> res;
void pre() {
  for (int i = 1; i * i * i < OO; ++i) {
    res.emplace_back(i * i * i);
  }
}
void solve() {
  ll x;
  cin >> x;
  // for (int i = 0; i * i * i < x; ++i) {
  //   if (binary_search(all(res), x - i * i * i)) {
  //     yes;
  //     return;
  //   }
  // }
  // no;
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
