// ﷽
// Contest: Codeforces Round 112 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/165/B/
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 01 Jun 2024 03:27:07 AM EEST
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
int n, k;
bool can(int v) {
  int i = 0;
  ll x;
  ll sum = 0;
  while (50) {
    x = v / pow(k, i++);
    sum += x;
    if (!x) return (sum >= n);
  }
}
void solve() {
  cin >> n >> k;
  ll l = 1, r = 1, m, ans;
  while (not can(r)) r *= 2;
  while (l <= r) {
    m = l + (r - l) / 2;
    if (can(m)) {
      ans = m;
      r = m - 1;
    } else
      l = m + 1;
  }
  cout << ans << endl;
}
int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  // cin>>t;
  while (t--) solve();
  return 0;
}
