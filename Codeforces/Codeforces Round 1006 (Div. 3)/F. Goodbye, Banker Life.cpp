// ﷽
// Contest: Codeforces Round 1006 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2072/problem/F
// Memory Limit: 256
// Time Limit: 3000
// Start: Tue 25 Feb 2025 06:41:50 PM EET
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
  int n, k;
  cin >> n >> k;

  vector<vector<int>> T(n + 1, vector<int>(n + 1, 0));

  T[1][1] = k;

  for (int i = 2; i <= n; i++) {
    T[i][1] = T[i][i] = T[i - 1][1];
    for (int j = 2; j < i; j++) {
      T[i][j] = T[i - 1][j - 1] ^ T[i - 1][j];
    }
  }

  for (int j = 1; j <= n; j++) {
    cout << T[n][j] << " ";
  }
  debug(T);
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
