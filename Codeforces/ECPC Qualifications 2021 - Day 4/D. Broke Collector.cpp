// ﷽
// Contest: ECPC Qualifications 2021 - Day 4
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/605910/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 09 May 2025 05:44:29 PM EEST
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

struct item {
  int x=0, t=0,v=0;
};

void solve() {
  int n;
  cin >> n;
  vector<item> arr(n);
  for (int i = 0; i < n; i++) {
    int x, c, vv;
    cin >> x >> c >> vv;
    arr[i] = {x, c, vv};
  }
  sort(all(arr), [](auto &x, auto &y) { return x.t < y.t; });
  vi memo(n, -1);

  auto go = [&](auto &go, int i) -> int {
    if (memo[i] != -1)
      return memo[i];

    int res = arr[i].v;

    for (int j = 0; j < i; j++) {
      if (arr[i].t - arr[j].t >= abs(arr[i].x - arr[j].x)) {
        res = max(res, go(go, j) + arr[i].v);
      }
    }
    return memo[i] = res;
  };

  int ans = 0;
  // ans = go(go,0);
  for (int i = 0; i < n; i++) {
    ans = max(ans, go(go, i));
  }

  cout << ans << "\n";
}
int32_t main() {

   freopen("collector.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
