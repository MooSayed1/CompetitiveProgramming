// ﷽
// Contest: Codeforces Round 918 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1915/D
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 26 Apr 2024 10:44:41 AM EEST
//
#include <bits/stdc++.h>
#include <type_traits>
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
  string a = "";
  while (!s.empty()) {
    int b;
    if (s.back() == 'a' || s.back() == 'e') {
      b = 2;
    } else {
      b = 3;
    }
    while (b--) {
      a += s.back();
      s.pop_back();
    }
    a += '.';
  }
  a.pop_back();
  reverse(a.begin(), a.end());
  cout << a << "\n";
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
