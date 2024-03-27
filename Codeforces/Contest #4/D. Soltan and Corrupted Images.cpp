// ﷽
// Contest: Contest #4
// Judge: Codeforces
// URL: https://codeforces.com/group/Q9kIGOqLzi/contest/513056/problem/D
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 23 Mar 2024 12:06:56 AM EET
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
  int r, c;
  cin >> r >> c;
  char arr[r][c];
  int cntzr = 0, cnt = 0;
  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
        cntzr += !(arr[i][j] == 0);
      else
        cnt += (arr[i][j] == 1);
    }
  }
  if (cntzr <= cnt)
    cout << cntzr << endl;
  else
    cout << -1 << endl;
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
