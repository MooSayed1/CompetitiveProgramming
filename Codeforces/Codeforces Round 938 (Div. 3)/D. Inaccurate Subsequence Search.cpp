// ﷽
// Contest: Codeforces Round 938 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1955/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 09 Apr 2024 05:04:37 PM EET
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
  vi arr(n);
  vi frq(1e6, 0);
  for (auto &it : arr) {
    cin >> it;
    frq[it]++;
  }
  vi brr(m);
  int cnt = 0;
  for (int &it : brr) {
    cin >> it;
    if (frq[it])
      ++cnt;
  }
  debug(cnt);
  cout << cnt - (k - 2) << endl;
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
