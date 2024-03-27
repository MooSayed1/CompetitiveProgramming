// ﷽
// Contest: Codeforces Round 863 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1811/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 27 Mar 2024 07:14:28 AM EET
//
#include <algorithm>
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
  vi arr(n - 1);
  cin >> arr;
  vi b;
  b.push_back(arr[0]);
  for (int i = 0; i < n - 2; ++i)
    b.push_back(min(arr[i], arr[i + 1]));
  b.push_back(arr[n - 2]);
  for (auto &it : b)
    cout << it << " ";
  cout << "\n";
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
