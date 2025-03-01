// ﷽
// Contest: Codeforces Round 1007 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2071/problem/B
// Memory Limit: 256
// Time Limit: 1500
// Start: Sat 01 Mar 2025 01:32:55 AM EET
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
  int k;
  cin >> k;
  int x = (k * (k + 1)) / 2;
  int y = sqrtl(x);
  if (y * y == x) {
    cout << -1 << endl;
    return;
  }
 int i = 1;
  while (i <= k) {
    int x = (i * (i + 1)) / 2;
    int y = sqrtl(x);
    if (y * y == x) {
      cout << i + 1 << " " << i << " ";
      i += 2;
    } else {
      cout << i << " ";
      i++;
    }
  }
  cout << endl;
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
