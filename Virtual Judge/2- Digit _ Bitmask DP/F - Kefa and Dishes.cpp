// ﷽
// Contest: 2- Digit / Bitmask DP
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/696623#problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 27 Feb 2025 11:11:27 PM EET
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
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  map<pair<int, int>, int> mp;
  for (int i = 0; i < k; ++i) {
    int l, r;
    cin >> l >> r;
    int c;
    cin >> c;
    mp[{l - 1, r - 1}] = c;
  }
  vector dp(n+1, vi(1 << n, -1));

  auto go = [&](auto &&go, int prv, int mask) -> int {
    if (popCnt(mask) == m) {
      return 0;
    }
    int &ret = dp[prv][mask];
    if (ret != -1)
      return ret;

    int ans = 0;
    for (int j = 0; j < n; ++j) {
      if (mask & (1 << j))
        continue;
      ans = max(ans, mp[{prv, j}] + v[j] + go(go, j, mask | (1 << j)));
    }
    ret = ans;
    return ret;
  };
  cout << go(go, n, 0);
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
