// ﷽
// Contest: Codeforces Beta Round 61 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/66/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 22 Apr 2025 03:58:53 PM EET
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
  long double n;
  cin >> n;
  if (n <= 127) {
    cout << "byte" << endl;
  } else if (n <= 32767) {
    cout << "short" << endl;
  } else if (n <= 2147483647) {
    cout << "int" << endl;
  } else if (n <= 9223372036854775807) {
    cout << "long" << endl;
  } else {
    cout << "BigInteger" << endl;
  }
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
