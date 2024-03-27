// ﷽
// Contest: Codeforces Round 936 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1946/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 22 Mar 2024 04:48:24 PM EET
//
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
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
ll const oo = 1e18;
const int MOD = 1e9 + 7;
void solve() {
  int n, k;
  cin >> n >> k;
  vi arr(n);
  cin >> arr;
  ll maxsup = arr[0];
  ll ans = arr[0];
  ll sum = arr[0];
  for (int i = 1; i < n; ++i) {
    maxsup = max(1LL * arr[i], maxsup + arr[i]);
    ans = max(ans, maxsup);
    sum += arr[i];
  }
  debug(ans);
  if (ans < 0)
    ans = 0;
  sum -= ans; // sum wihtout max sup array
  for (int i = 0; i < k; ++i) {
    ans = (ans * 2) % MOD;
  }
  // ans is the max sup sequance
  ans = (ans + sum) % MOD;

  cout << ((ans < 0) ? ans + MOD : ans);
  cout << "\n";
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
