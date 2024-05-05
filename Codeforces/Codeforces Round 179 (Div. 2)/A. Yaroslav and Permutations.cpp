// ﷽
// Contest: Codeforces Round 179 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/296/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 25 Apr 2024 07:46:23 PM EET
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

vi frq(1005);
void solve() {
  int n, v;
  cin >> n;
  vi a(1001, 0);
  for (int i = 0; i < n; ++i) {
    cin >> v;
    a[v]++;
  }
  for (int i = 1; i < 1001; ++i)
    if (a[i] > (n + 1) / 2) {
      cout << "NO\n";
      return;
    }
  cout << "YES\n";
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
