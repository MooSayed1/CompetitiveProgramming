// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-10452
// Memory Limit: 1024
// Time Limit: 3000
// Start: Wed 30 Apr 2025 08:46:05 PM EEST
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
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};

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
  vector<vector<char>> arr(n, vector<char>(m));
  cin >> arr;
  string s = "@IEHOVA#";
  vector<string> res;

  auto dfs = [&](auto &dfs, int i, int j, int cnt) -> bool {
    debug(arr[i][j], cnt, s[cnt]);
    debug(res);
    if (arr[i][j] != s[cnt])
      return false;
    if (cnt == s.size() - 1)
      return true;

    if (arr[i][j] == s[cnt]) {
      if (i - 1 >= 0 && i - 1 < n) {
        res.push_back("forth");
        bool f = dfs(dfs, i - 1, j, cnt + 1);
        if (f)
          return true;
        res.pop_back();
      }
    }

    if (j + 1 >= 0 && j + 1 < m) {
      res.push_back("right");
      if (dfs(dfs, i, j + 1, cnt + 1)) {
        return true;
      } else {
        res.pop_back();
      }
    }

    if (j - 1 >= 0 && j - 1 < m ) {
      res.push_back("left");
      if (dfs(dfs, i, j - 1, cnt + 1)) {
        return true;
      } else {
        res.pop_back();
      }
    }
    return false;
  };
  int sj = -1;
  for (int j = 0; j < m; ++j) {
    if (arr[n - 1][j] == '@') {
      sj = j;
      break;
    }
  }

  dfs(dfs, n - 1, sj, 0);
  debug(res);

  for (int k = 0; k < (int)res.size(); ++k) {
    cout << res[k];
    if (k + 1 < (int)res.size())
      cout << ' ';
  }
  cout << '\n';
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
