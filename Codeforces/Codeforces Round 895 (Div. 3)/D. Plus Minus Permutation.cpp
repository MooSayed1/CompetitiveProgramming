// ﷽
// Contest: Codeforces Round 895 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1872/problem/D
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 19 May 2024 10:55:32 AM EEST
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
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define OO 1e8
#define endl "\n"

template <typename T>
istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data) input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {
  for (const T &x : data) output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
  ll n;
  cin >> n;
  ll x, y;
  cin >> x >> y;
  ll f = x * y;
  int temp = n / (x * y / __gcd(x, y));
  ll res1, res2;
  res1 = n / x;  // 3   7 + 6 + 4
  res2 = n / y;  // 2   1+2

  res1-=temp;
  res2-=temp;
  ll sum1 = 0;
  ll sum2 = 0;

  res1= n - res1;
  sum1 = (n * (n + 1) / 2) - (res1 * (res1 + 1) / 2);

  sum2 = res2 * (res2 + 1) / 2;

  cout << sum1 - sum2 << endl;
}

int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
