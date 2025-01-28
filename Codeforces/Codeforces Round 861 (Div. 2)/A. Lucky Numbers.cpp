// ﷽
// Contest: Codeforces Round 861 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1808/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 26 Mar 2024 07:04:05 AM EET
//
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
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
int lucky(int n) {
  string temp = to_string(n);
  return (*max_element(all(temp)) - *min_element(all(temp)));
}
void solve() {
  int l, r;
  cin >> l >> r;
  int ans = 0;
  int num = 0;
  for (int i = l; i <= r; ++i) {
    int x = lucky(i);
    if (ans <= x) {
      ans = x;
      num = i;
    }
    if (ans == 9) {
      cout << i << endl;
      return;
    }
  }
  cout << num << endl;
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
