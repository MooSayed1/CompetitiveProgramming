// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1650
// Memory Limit: 512
// Time Limit: 1000
// Start: Sat 10 May 2025 11:34:11 PM EEST
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
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};

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
  int n, q;
  cin >> n >> q;
  vi arr(n), pxor(n + 1, 0);

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    pxor[i + 1] = arr[i] ^ pxor[i];
  }

  while (q--) {
    int a, b;
    cin >> a >> b;
    int ans = pxor[b] ^ pxor[a - 1];
    cout << ans << '\n';
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
