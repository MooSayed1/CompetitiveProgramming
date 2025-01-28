// ﷽
// Contest: CodeTON Round 5 (Div. 1 + Div. 2, Rated, Prizes!)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1842/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 28 Mar 2024 05:57:13 AM EET
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
  vi arr(n);
  vi a(m);
  cin >> arr >> a;
  ll sum = 0;
  ll s = 0;
  for (auto &it : arr)
    sum += it;

  for (auto &it : a)
    s += it;
  if (sum > s)
    cout << "Tsondu" << endl;
  else if (s > sum)
    cout << "Tenzing" << endl;
  else
    cout << "Draw" << endl;
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
