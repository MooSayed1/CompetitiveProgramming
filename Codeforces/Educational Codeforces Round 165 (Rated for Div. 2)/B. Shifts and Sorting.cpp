// ﷽
// Contest: Educational Codeforces Round 165 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1969/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 29 Apr 2024 06:02:22 PM EEST
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
  string s;
  cin >> s;
  ll cnt = 0;
  ll res = 0;
  ll len = s.size();
  for (int i = 0; i < len; ++i) {
    if (s[i] == '1') {
      cnt++;
      continue;
    }
    if (cnt > 0) {
      if (s[i] == '0') {
        res += cnt + 1;
      }
    }
  }
  cout << res << endl;
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
