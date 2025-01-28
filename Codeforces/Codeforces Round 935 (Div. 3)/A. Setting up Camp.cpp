// ﷽
// Contest: Codeforces Round 935 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1945/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 19 Mar 2024 08:27:16 PM EET
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
  int a, b, c;
  cin >> a >> b >> c;
  if (c + (b % 3) < 3 && (b % 3) != 0) {
    cout << -1 << endl;
    return;
  }
  if (b % 3 != 0) {
    int temp = 3 - b % 3;
    c -= temp;
    b += temp;
    int x = c - ((c / 3) * 3);
    x = ceil(x / 3.0);
    debug(x);
    cout << a + (b / 3) + (c / 3) + x << endl;
  } else {
    int x = c - ((c / 3) * 3);
    x = ceil(x / 3.0);
    cout << a + (b / 3) + (c / 3) + x << endl;
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
