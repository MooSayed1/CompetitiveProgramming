// ﷽
// Contest: Codeforces Round 1013 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2091/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 29 Apr 2025 06:53:23 PM EEST
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

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;

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

void solve() {
  int n, x;
  cin >> n >> x;
  vi arr(n);
  cin >> arr;
  sort(all(arr), greater<int>());
  int ans = 0;
  int mn = arr[0];
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    debug(arr[i]);
    cnt++;
    debug(mn);
    if (mn * cnt >= x) {
      cnt = 0, ans++;
    }
    mn=arr[i+1];
  }
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
