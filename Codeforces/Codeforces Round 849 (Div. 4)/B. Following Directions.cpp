// ﷽
// Contest: Codeforces Round 849 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1791/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 23 Mar 2024 10:28:03 PM EET
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  bool flag = 0;
  int x = 0, y = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'R')
      ++x;
    else if (s[i] == 'L')
      --x;
    else if (s[i] == 'U')
      ++y;
    else if (s[i] == 'D')
      --y;

    debug(x, y);
    if (x == 1 && y == 1) {
      flag = 1;
      yes;
      break;
    }
  }
  if (!flag)
    no;
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
