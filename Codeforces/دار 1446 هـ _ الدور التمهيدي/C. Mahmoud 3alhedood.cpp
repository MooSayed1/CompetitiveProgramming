// ﷽
// Contest: دار 1446 هـ | الدور التمهيدي
// Judge: Codeforces
// URL: https://codeforces.com/group/6aLUitEJUs/contest/590944/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 25 Feb 2025 08:10:20 PM EET
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
  int n, m;
  cin >> n >> m;
  auto go = [&](auto &&go, int x) -> pair<int, int> { // o(nlogn)
    if (!x)
      return {0, 1};
    auto p = go(go, x >> 1);
    int a = p.first, b = p.second;
    int c = (a * ((2 * b - a + MOD) % MOD)) % MOD;
    int d = ((a * a) % MOD + (b * b) % MOD) % MOD;
    return (x & 1) ? make_pair(d, (c + d) % MOD) : make_pair(c, d);
  };
  int fn = go(go, n + 1).first, fm = go(go, m + 1).first;
  cout << (2 * ((fn + fm - 1) % MOD) + MOD) % MOD << endl;
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
