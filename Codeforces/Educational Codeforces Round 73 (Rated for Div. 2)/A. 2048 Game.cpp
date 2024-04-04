// ﷽
// Contest: Educational Codeforces Round 73 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1221/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 03 Apr 2024 12:14:02 AM EET
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
void solve2() {
  int n = 64;
  int arr[] = {1, 1, 512, 1, 4,  2, 2, 1, 128, 1, 1, 1, 1, 1, 1,    1,
               1, 1, 1,   1, 64, 1, 1, 1, 1,   1, 1, 1, 1, 1, 1,    1,
               1, 1, 1,   1, 1,  1, 1, 1, 1,   1, 1, 1, 1, 1, 1024, 1,
               1, 1, 1,   1, 1,  1, 1, 1, 1,   1, 1, 1, 1, 1, 1,    256};
  ll sum = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] <= 2048)
      sum += arr[i];
  }
  debug(sum);
  if (sum >= 2048)
    yes;
  else
    no;
}
void solve() {
  int n, ans = 0, t;
  cin >> n;
  // 1 2 4 8 16 32 64 128 256 512 1024 2048;

  for (size_t i = 0; i < n; i++) {
    cin >> t;
    if (t == 2048) {
      cout << "YES\n";
      return;
    }
    if (t < 2048) {
      ans += t;
    }
  }

  debug(ans);
  if (ans >= 2048) {
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
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
