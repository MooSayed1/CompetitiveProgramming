// ﷽
// Contest: The 2023 ICPC Egyptian Collegiate Programming Contest (Qualifications Day 5)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/530046/problem/F
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 05 Jul 2024 03:58:54 PM EEST
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
#define pii pair<int,int>
#define OO 2e9
#define endl "\n"
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};

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
  vi pref(n + 1, 0);

  for (int i = 0; i < n; ++i) {
     pref[i + 1] += 1;
    pref[i + arr[i] + 1] -= 1;  // --> i + arr[i] --> number of minutes and pi 
  }

  debug(pref);

  for (int i = 1; i <= n; ++i) { 
    pref[i] += pref[i - 1];
  }

  debug(pref);
  cout << *max_element(all(pref)) << endl;
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
