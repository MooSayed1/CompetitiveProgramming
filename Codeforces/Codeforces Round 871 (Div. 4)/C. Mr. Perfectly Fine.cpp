// ﷽
// Contest: Codeforces Round 871 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1829/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 21 Mar 2025 03:24:41 PM EET
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
  int q;
  cin >> q;
  vector<int> v(3, OO);
  while (q--) {
    int time;
    string s;
    cin >> time >> s;

    if (s == "10")
      v[0] = min(v[0], time);
    else if (s == "01")
      v[1] = min(v[1], time);
    else if (s == "11")
      v[2] = min(v[2], time);
  }
  int ans = min(v[0] + v[1], v[2]);
  if (ans == OO)
    cout << -1 << "\n";
  else
    cout << ans << "\n";
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
