#include <bits/stdc++.h>
using namespace std;
#ifdef CODEFORCES
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"

void solve() {
  int n;
  cin >> n;
  vi arr(n);
  for (auto &it : arr)
    cin >> it;

  vi res;
  vector dp = vector(n, vi(1e4, -1));
  auto go = [&](auto &&go, int i, int sum) -> int {
    debug(i);
    if (i == n) {
      res.push_back(sum);
      return 0;
    }
    if (~sum)
      if (~dp[i][sum])
        return 0;

    int take = 0, leave = 0;
    take = go(go, i + 1, sum + arr[i]);
    leave = go(go, i + 1, sum);
    if (~sum)
      dp[i][sum] = take + leave;
    return dp[i][sum];
  };

  go(go, 0, -1);

  set<int> st(all(res));
  res.assign(all(st));
  cout << res.size() << endl;
  for (auto &it : res) {
    cout << it << ' ';
  }
  cout << endl;
  debug(res);

}
int32_t main() {

  fast;
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
