// ﷽
// Contest: Codeforces Round 849 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1791/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 23 Mar 2024 10:33:43 PM EET
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
  bool zero = 0;
  int cnt = 0;
  ll sum = 0;
  for (auto &it : arr) {
    cin >> it;
    if (it == 0)
      zero = 1;
    if (it < 0)
      cnt++;
    sum += abs(it);
  }

  if (zero) {
    cout << sum << endl;
    return;
  }

  if (cnt & 1 ^ 1) {
    cout << sum << endl;
    return;
  }
  for (auto &it : arr)
    if (it < 0)
      it *= -1;
  int minn = *min_element(all(arr));
  sum -= minn*2;
  cout << sum << endl;
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
