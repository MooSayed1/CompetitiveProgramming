// ﷽
// Contest: 1- Dynamic Programming (Additional Problems)
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/694791#problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 01 Mar 2025 05:47:33 AM EET
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
  vector<int> coins(n);
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }

  vector dp(n + 1, vector<bitset<505>>(k + 1));
  dp[0][0].set(0);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= k; j++) {
      dp[i + 1][j] |= dp[i][j]; // leave
      if (j + coins[i] <= k) {
        dp[i + 1][j + coins[i]] |= dp[i][j] | (dp[i][j] << coins[i]); // take sum and supsup or take sum without put it in the supsum
      }
    }
  }

  bitset<505> res = dp[n][k];
  vector<int> ans;
  for (int x = 0; x <= k; x++) {
    if (res.test(x))
      ans.push_back(x);
  }

  cout << ans.size() << "\n";
  for (int x : ans)
    cout << x << " ";
  cout << "\n";
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
