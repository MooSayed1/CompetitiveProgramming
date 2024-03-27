// ﷽
// Contest: Codeforces Round 863 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1811/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 24 Mar 2024 04:23:46 AM EET
//
#include <bits/stdc++.h>
#include <string>
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
  int n, dig;
  cin >> n >> dig;
  string s;
  cin >> s;
  int indx = n;
  for (int i = n - 1; i >= 0; --i) {
    if (dig > s[i] - '0') {
      indx = i;
    }
  }
  debug(indx);
  s.insert(indx, to_string(dig));
  cout << s << endl;
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
