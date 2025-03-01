// ﷽
// Contest: 1- Dynamic Programming
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/694790#problem/C
// Memory Limit: 512
// Time Limit: 1000
// Start: Sun 23 Feb 2025 04:16:31 PM EET
//
#include <bits/stdc++.h>
#include <climits>
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

int n, x;
vi dp;
vi coins;
int fun(int num) {
  if (num < 0)
    return OO;
  if (num == 0)
    return 0;

  if (dp[num] != LLONG_MAX)
    return dp[num];

  int ans = OO;

  for (auto coin : coins) {
    ans = min(ans, 1 + fun(num - coin));
  }
  return dp[num] = ans;
}

void solve() {

  cin >> n >> x;
  dp.assign(x + 1, LLONG_MAX);
  coins.resize(n);
  cin >> coins;

  // for (int i = x; i > 0; --i) {
  //   for (auto &c : coins) {
  //     if (i < c)
  //       continue;
  //     dp[i] = min(dp[i], 1 + dp[i - c]);
  //   }
  // }
  // debug(dp);
  int ans = fun(x);
  cout << ((ans == OO) ? -1 : ans);
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
