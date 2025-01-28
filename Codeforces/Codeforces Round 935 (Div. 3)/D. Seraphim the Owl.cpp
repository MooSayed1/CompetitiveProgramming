// ﷽
// Contest: Codeforces Round 935 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1945/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 19 Mar 2024 11:53:55 PM EET
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
  int n, m;
  cin >> n >> m;
  vi a(n), b(n);
  cin >> a >> b;

  ll ans = 0;
  for (int i = n - 1; i > m - 1; --i) {
    if (i == 0) {
      ans += a[m - 1];
      break;
    }
    ans += min(a[i], b[i]);
  }
  ll sum = 0, sum2 = 0;
  sum = a[m - 1];
  sum2 = b[m - 1] + a[m - 2];
  if (m == 1) {
    sum = a[m - 1];
  } else if (m == 2)
    sum = min(sum, sum2);
  else if (m > 2) {
    for (int i = m - 2; i > 0; --i) {
      debug(sum2);
      sum = min(sum, sum2);
      sum2 += b[i] + a[i - 1] - a[i];
    }
    sum = min(sum, sum2);
  }
  cout << sum + ans << endl;
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
