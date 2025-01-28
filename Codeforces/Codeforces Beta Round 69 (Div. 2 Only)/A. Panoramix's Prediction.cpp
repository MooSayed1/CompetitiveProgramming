// ﷽
// Contest: Codeforces Beta Round 69 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/80/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 05 Apr 2024 09:41:17 PM EET
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
bool is_Prime(int n) {
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0)
      return false;
  }
  return true;
}
void solve() {
  int n, m;
  cin >> n >> m;
  int x = 0;
  debug(x);
  for (int i = n + 1;; ++i) {
    if (is_Prime(i)) {
      x = i;
      break;
    }
  }
  if (m == x)
    yes;
  else
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
