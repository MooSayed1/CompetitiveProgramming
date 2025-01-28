// ﷽
// Contest: Codeforces Round 258 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/451/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 04 Apr 2024 10:52:11 PM EET
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
  int n;
  cin >> n;
  vi arr(n);
  cin >> arr;
  vi sorted(arr);
  sort(all(sorted));
  // if (is_sorted(all(arr))) {
  //   cout << "yes\n" << 1 << " " << 1;
  //   return;
  // }
  int l = -1, r = -1;
  for (int i = 0; i < n; ++i)
    if (arr[i] != sorted[i]) {
      l = i;
      break;
    }

  for (int i = n - 1; i >= 0; --i)
    if (arr[i] != sorted[i]) {
      r = i;
      break;
    }
  reverse(arr.begin() + l, arr.begin() + r + 1);
  debug(r, l);
  debug(arr);
  if (r == -1 || l == -1) {
    cout << "yes\n" << 1 << " " << 1;
    return;
  }
  if (is_sorted(all(arr))) {
    cout << "yes" << endl;
    cout << l + 1 << " " << r + 1 << endl;
  } else
    cout << "no" << endl;
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
