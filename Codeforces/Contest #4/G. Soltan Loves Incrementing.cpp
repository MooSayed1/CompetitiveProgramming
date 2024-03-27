// ﷽
// Contest: Contest #4
// Judge: Codeforces
// URL: https://codeforces.com/group/Q9kIGOqLzi/contest/513056/problem/G
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 22 Mar 2024 11:55:22 PM EET
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
  vi arr(n);
  cin >> arr;
  int cntEv = 0, cntOd = 0;
  for (int i = 0; i < n; ++i)
    if (arr[i] & 1 ^ 1)
      cntEv++;
    else
      cntOd++;

  debug(arr);
  if (cntEv == n || cntOd == n) {
    yes;
    return;
  }

  cntEv = 0;
  cntOd = 0;
  for (int i = 0; i < n; ++i)
    if (i & 1 ^ 1)
      arr[i]++;
  debug(arr);
  for (int i = 0; i < n; ++i)
    if (arr[i] & 1 ^ 1)
      cntEv++;
    else
      cntOd++;

  if (cntEv == n || cntOd == n) {
    yes;
    return;
  }
  no;
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
