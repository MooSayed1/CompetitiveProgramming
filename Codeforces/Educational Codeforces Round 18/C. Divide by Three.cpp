// ﷽
// Contest: Educational Codeforces Round 18
// Judge: Codeforces
// URL: https://codeforces.com/contest/792/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 27 Feb 2025 12:03:12 AM EET
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
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;
const int OO = 2e9;

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

  vector dp(n + 1, vector<vector<int>>(3, vector<int>(2, -1)));

  auto go = [&](auto &&go, int i, int sum, int z) -> int {
    if (i == n)
      return (sum == 0 && z) ? 0 : -OO;
    int &ret = dp[i][sum][z];
    if (ret != -1)
      return ret;

    int ans = go(go, i + 1, sum, z);
    ans = max(ans, 1 + go(go, i + 1, (sum + s[i] - '0') % 3, z || s[i] != '0'));
    return ret = ans;
  };

  auto ans = go(go, 0, 0, 0);
  if (ans < 0) {
    if (s.find("0") != string::npos)
      cout << 0 << endl;
    else
      cout << -1 << endl;
    return;
  }

  // string res = "";

  auto build = [&](auto &&build, int i, int sum, int z) -> void {
    if (i == n)
      return;

    int leave = (i+1<n)?dp[i+1][sum][z]:0 /* go(go, i + 1, sum, z) */;
    int take = (z||s[i]!=0)?((i+1<n)?1+dp[i+1][(sum+s[i]-'0')%3][1]:1):-OO;

    if (leave > take) {
      build(build, i + 1, sum, z);
    } else {
      cout << s[i];
      build(build, i + 1, (sum + (s[i] - '0')) % 3, z && s[i] == '0');
    }
  };

  build(build, 0, 0, 0);
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
