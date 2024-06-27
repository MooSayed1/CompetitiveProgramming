// ﷽
// Contest: Educational Codeforces Round 15
// Judge: Codeforces
// URL: https://codeforces.com/contest/702/problem/C
// Memory Limit: 256
// Time Limit: 3000
// Start: Sat 08 Jun 2024 07:17:00 AM EEST
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
  ll n, m;
  cin >> n >> m;
  vector<ll> arr(n), brr(m);
  cin >> arr >> brr;
  ll k = 0;
  ll ans = INT_MIN;
  for (int i = 0; i < n; ++i) {
    if (k < m) {
      while (abs(brr[k] - arr[i]) >= abs(brr[k + 1] - arr[i])) {
        k++;
      }
    }
    debug(arr);
    // debug(brr[k]);
    // debug(brr[k] - arr[i]);
    ans = max(ans, abs(brr[k] - arr[i]));
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
