// ﷽
// Contest: Codeforces Round 939 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1956/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 13 Apr 2024 05:14:59 PM EET
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
  vi p(n);
  ll sum = 0;

  for (int i = 0; i < n; i++) {
    p[i] = i + 1;
  }
  int len = n - 1;
  debug(p);
  for (int i = n; i > (n / 2); --i) {
    sum += p[i - 1] * n;
    debug(p[i]);
  }
  debug(sum);

  ll summm = n * (n + 1) / 2;
  debug(summm);
  for (int i = 0; i < n / 2; i++)
    sum += summm;

  // debug(sum);

  cout << sum << " " << n + n / 2 << endl;
  for (int i = 0; i < n; ++i) {
    cout << 1 << " " << i + 1 << " ";
    cout << p;
    cout << endl;
  }

  len = n / 2.0;
  for (int i = 0; i < len; i++) {
    cout << 2 << " " << i + 1 << " ";
    cout << p << endl;
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
