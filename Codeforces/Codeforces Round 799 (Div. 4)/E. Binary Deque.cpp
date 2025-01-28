// ﷽
// Contest: Codeforces Round 799 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1692/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 11 May 2024 11:05:36 PM EEST
//
#include <algorithm>
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
void solve() {
  int n, x;
  cin >> n >> x;
  vi arr(n);
  int sum = 0;
  for (auto &it : arr) {
    cin >> it;
    sum += it;
  }
  vi pref(n + 1), suf(n + 1);
  for (int i = 0, j = n - 1; i < n - 1; ++i, --j) {
    pref[i + 1] = pref[i] + arr[i];
    suf[n - j] = suf[n - j - 1] + arr[j];
  }
  int ans = 1e9;
  x = sum - x;
  debug(pref);
  debug(suf);
  for (int i = 0; i <= n; i++) {
    int temp = x - pref[i];
    if (temp < 0)
      continue;
    int it = lower_bound(suf.begin(), suf.end(), temp) - suf.begin();
    if (suf[it] == temp && it <= n - i)
      ans = min(ans, i + it);
  }
  if (ans == 1e9)
    cout << -1 << endl;
  else
    cout << ans << endl;
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
