// ﷽
// Contest: 2- Digit / Bitmask DP
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/696623#problem/E
// Memory Limit: 64
// Time Limit: 1000
// Start: Sat 01 Mar 2025 04:08:54 AM EET
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
  int m, n;
  cin >> m >> n;
  vector<int> arr(m);
  for (int i = 0; i < m; i++) {
    cin >> arr[i];
  }

  vector<vector<int>> dp(n + 1, vector<int>(m, -1));

  auto go = [&](auto &go, int pos, int last) -> int {
    if (pos == n)
      return 1;
    if (dp[pos][last] != -1)
      return dp[pos][last];

    int ways = 0;
    for (int j = 0; j < m; j++) {
      if (abs(arr[last] - arr[j]) <= 2) {
        ways += go(go, pos + 1, j);
      }
    }
    return dp[pos][last] = ways;
  };

  int ans = 0;
  for (int i = 0; i < m; ++i) {
    ans += go(go, 1, i);
  }
  cout << ans << "\n";
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  int ca = 0;
  while (t != ca) {
    cout << "Case " << ++ca << ": ";
    solve();
  }
  return 0;
}
