// ﷽
// Contest: Codeforces Round 211 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/363/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 05 Apr 2024 08:27:18 PM EET
//
#include <bits/stdc++.h>
#include <climits>
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
  int n, k;
  cin >> n >> k;
  k--;
  vi arr(n);
  cin >> arr;
  vi pref(n + 1);
  for (int i = 1; i <= n; ++i) {
    pref[i] = pref[i - 1] + arr[i - 1];
  }
  int indx = -1;
  int minn = INT_MAX;
  for (int i = 1; i + k <= n; ++i) {
    int temp = pref[i + k] - pref[i - 1];
    if (temp < minn) {
      indx = i;
      minn = temp;
    }
  }
  cout << indx << endl;
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
