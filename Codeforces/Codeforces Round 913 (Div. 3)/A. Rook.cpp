// ﷽
// Contest: Codeforces Round 913 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1907/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: 22 ديس, 2023 08:39:56 ص
//
#include <bits/stdc++.h>
#include <iostream>
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define int long long
using namespace std;

void solve() {
  string s;
  cin >> s;
  int col = s[0] - '0';
  int row = s[1] - 64;
  // cout<<rchar)row<<endl;
  for (int i = 1; i <= 7; ++i) {
    if (col != i)
      cout << i << s[1] << endl;
  }
  for (int i = 0; i < 7; ++i) {
    if (row != (char)('a' + i))
      cout << col << (char)('a' + i) << endl;
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  cin >> n;
  while (n--)
    solve();
  return 0;
}
