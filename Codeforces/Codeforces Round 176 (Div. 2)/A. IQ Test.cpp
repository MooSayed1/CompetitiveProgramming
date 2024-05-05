// ﷽
// Contest: Codeforces Round 176 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/287/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 26 Apr 2024 10:02:34 AM EEST
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

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define endl "\n"

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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
  vector<string> arr(4);
  int cntdot = 0, cnthash = 0;
  for (int i = 0; i < 4; ++i)
    cin >> arr[i];
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; j++) {
      cntdot += (arr[i][j] == '.') + (arr[i][j + 1] == '.') +
                (arr[i + 1][j] == '.') + (arr[i + 1][j + 1] == '.');
      cnthash += (arr[i][j] == '#') + (arr[i][j + 1] == '#') +
                 (arr[i + 1][j] == '#') + (arr[i + 1][j + 1] == '#');
      if (cntdot >= 3 || cnthash >= 3) {
        yes;
        return;
      }
      debug(cntdot, cnthash);
      cntdot = 0, cnthash = 0;
    }
  }
  no;
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
