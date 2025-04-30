// ﷽
// Contest: Juniors Phase 1 Practice #5 (Bitmask, Bitset, Bits)
// Judge: Codeforces
// URL: https://codeforces.com/group/3nQaj5GMG5/contest/377898/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 18 Mar 2025 03:30:48 PM EET
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
  int l, r;
  cin >> l >> r;

  int ans = 0;
  for (int i = 2; i < 62; ++i) {
    for (int j = 0; j < i - 1; ++j) {
      bitset<10> bt = (1LL << i) - 1 ^ (1LL << j);
      debug(bt);
      int num = (1LL << i) - 1 ^ (1LL << j);
      if (num >= l && num <= r)
        ans++;
    }
  }
  cout << ans << endl;
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
