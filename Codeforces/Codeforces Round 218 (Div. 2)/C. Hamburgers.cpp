// ﷽
// Contest: Codeforces Round 218 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/371/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 10 May 2025 07:13:04 PM EEST
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
int cntB, cntS,cntC,m;
vi ing, costs;
bool can(int mid) {
  int bPrice = max(0LL, cntB * mid - ing[0]) * costs[0];//381+
  int sPrice = max(0LL, cntS * mid - ing[1]) * costs[1];
  int cPrice = max(0LL, cntC * mid - ing[2]) * costs[2];

  return bPrice + sPrice + cPrice <= m;
}

void solve() {
  string s;
  cin >> s;
  for (auto &it : s) {
    if (it == 'B')
      cntB++;
    else if (it == 'S')
      cntS++;
    else
      cntC++;
  }

  ing.resize(3);
  cin >> ing;
  costs.resize(3);
  cin >> costs;
  cin >> m;
  debug(cntB,cntC,cntS);
  debug(ing);
  debug(costs);


  int l = 0, r = 1e13;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (can(mid)) {
      l = mid + 1;
    } else
      r = mid - 1;
  }
  cout << l-1 << endl;
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
