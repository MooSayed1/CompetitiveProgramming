// ﷽
// Contest: Codeforces Global Round 25
// Judge: Codeforces
// URL: https://codeforces.com/contest/1951/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 06 Apr 2024 04:35:14 PM EET
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
  int cnt = 0;
  int ind = -1;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '1') {
      ind = i;
      cnt++;
    }
  }

  if (cnt == 2) {
    if (s[ind] == s[ind - 1]) {
      no;
      return;
    } else {
      yes;
      return;
    }
  }
  if (cnt & 1) {
    no;
  } else {

    yes;
  }
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
