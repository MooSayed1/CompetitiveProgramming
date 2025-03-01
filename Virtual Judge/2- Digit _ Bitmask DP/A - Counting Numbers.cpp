// ﷽
// Contest: 2- Digit / Bitmask DP
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/657535#problem/A
// Memory Limit: 512
// Time Limit: 1000
// Start: Tue 25 Feb 2025 03:37:00 PM EET
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
  string s, t;
  cin >> s >> t;
  int n = t.size();
  int d;
  cin >> d;
  string zrs;
  int tm = t.size() - s.size();
  while (tm--) {
    zrs += '0';
  }
  s = zrs + s;

  int dp[21][11][2][2][2];
  memset(dp, -1, sizeof(dp));

  auto go = [&](auto &&go, int i, int pv, bool tu, bool td, bool z) -> int {
    if (i == n)
      return 1;

    int &ret = dp[i][pv][tu][td][z];
    if (~ret)
      return ret;

    int lo = (td == 1) ? s[i] - '0' : 0;
    int up = (tu == 1) ? t[i] - '0' : 9;
    int ans = 0;

    for (int j = lo; j <= up; ++j) {
      if (pv == j && z == 0)
        continue;
      // z = 1 and j 

      if (j != 0)
        ans += go(go, i + 1, j, tu && (j == up), td && (j == lo), 0);
      else
        ans += go(go, i + 1, 0, tu && (j == up), td && (j == lo), z);
    }

    return ret = ans;
  };

  cout << (go(go, 0, 0, 1, 1, s[0] == '0'));
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
