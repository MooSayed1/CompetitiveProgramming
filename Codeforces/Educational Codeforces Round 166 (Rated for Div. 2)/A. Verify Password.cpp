// ﷽
// Contest: Educational Codeforces Round 166 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1976/problem/0
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 30 May 2024 05:36:00 PM EEST
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
#define OO 1e8
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
  int n;
  cin >> n;
  vector<char> arr(n);
  for (auto &it : arr) cin >> it;

  string digits;
  string chars;
  for (int i = 0; i < n - 1; ++i) {
    if ((arr[i+1] >= '0' && arr[i+1] <= '9') &&
        (arr[i] >= 'a' && arr[i ] <= 'z')) {
      no;
      return;
    }
    if (arr[i] >= '1' && arr[i] <= '9') {
      digits.push_back(arr[i]);
    } else {
      chars.push_back(arr[i]);
    }
  }
  if (arr[n - 1] >= '0' && arr[n - 1] <= '9')
    digits.push_back(arr[n - 1]);
  else
    chars.push_back(arr[n - 1]);
  debug(digits);
  debug(chars);

  if (is_sorted(all(digits)) && is_sorted(all(chars))) {
    yes;
  } else
    no;
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
