// ﷽
// Contest: Codeforces Round 933 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1941/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 26 Mar 2024 04:54:35 AM EET
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
  int n, m, k;
  cin >> n >> m >> k;
  vi arr;
  vi a;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x < k)
      arr.push_back(x);
  }

  for (int i = 0; i < m; ++i) {
    int x;
    cin >> x;
    if (x < k)
      a.push_back(x);
  }
  debug(arr);
  debug(a);
  int cnt = 0;
  for (int i = 0; i < arr.size(); ++i) {
    for (int j = 0; j < a.size(); ++j) {
      debug(arr[i], a[j]);
      if ((arr[i] + a[j]) <= k) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
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
