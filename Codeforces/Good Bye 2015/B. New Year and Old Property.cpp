// ﷽
// Contest: Good Bye 2015
// Judge: Codeforces
// URL: https://codeforces.com/contest/611/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 03 Jun 2024 03:34:49 AM EEST
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

void solve() {
  ll a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = 1; i < 63; i++) {
    for (int j = 0; j < i - 1; j++) {
      ll x = ((1LL << i) - 1) ^ (1LL << j);

      if (a <= x && x <= b) {
        ans++;
      }
    }
  }
  cout << ans << "\n";
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
