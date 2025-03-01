// ﷽
// Contest: 2- Digit / Bitmask DP
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/696623#problem/D
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 27 Feb 2025 02:09:31 AM EET
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
  pair<int, string> dp[25][2][2][2];
  bool vis[25][2][2][2] = {};

  int a, b;
  cin >> a >> b;

  string L = to_string(a), R = to_string(b);
  while (L.size() < R.size()) {
    L = "0" + L;
  }
  int n = R.size();

  auto go = [&](auto &&go, int i, int td, int tu, int z) -> pair<int, string> {
    if (i == n) {
      return {z ? 1 : 0, ""};
    }
    bool &vs = vis[i][td][tu][z];
    pair<int, string> &ret = dp[i][td][tu][z];
    if (vs)
      return ret;

    int lo = (td ? L[i] - '0' : 1);
    int up = (tu ? R[i] - '0' : 9);

    pair<int, string> ans = {-1, ""};
    for (int d = lo; d <= up; d++) {

      // int dig = ((d || z) ? d : 1);

      auto sub = go(go, i + 1, td && (d == lo), tu && (d == up), z || d);
      int can = d * sub.first;

      if (can > ans.first) {
        ans = {can, char('0' + d) + sub.second};
      }
    }
    vs = true;
    return ret = ans;
  };
  int ans = stoll(go(go, 0, 1, 1, 0).second);
  cout << ans << "\n";
}

int32_t main() {
  fastio();
  int t = 1;
  while (t--)
    solve();
  return 0;
}
