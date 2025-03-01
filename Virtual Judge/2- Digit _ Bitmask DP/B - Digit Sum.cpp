// ﷽
// Contest: 2- Digit / Bitmask DP
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/657535#problem/B
// Memory Limit: 1024
// Time Limit: 2000
// Start: Tue 25 Feb 2025 01:23:58 AM EET
//
#include <array>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
namespace __gnu_pbds {
typedef tree<long long, null_type, less<long long>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
}
using namespace __gnu_pbds;
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
#define sz(a) (int)(a).size()
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int, int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};
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
  string s;
  cin >> s;
  int n = s.size();
  int d;
  cin >> d;
  vector<vector<vector<int>>> dp(n + 1,vector<vector<int>>(d, vector<int>(2, -1)));

  auto go = [&](auto &&go, int i, int sum, bool t) -> int {
    if (i == n)
      return (sum % d) == 0;

    int &ret = dp[i][sum][t];
    if (~ret)
      return ret;
    int up = (t == 1) ? s[i] - '0' : 9;
    // int dig = s[i] - '0';
    int ans = 0;

    for (int j = 0; j <= up; ++j) {
      ans += go(go, i + 1, (sum + j) % d, t && (j == up));
    }
    return ret = ans % MOD;
  };

  cout << (go(go, 0, 0, 1) - 1 + MOD) % MOD;
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
