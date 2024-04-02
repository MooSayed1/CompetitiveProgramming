// ﷽
// Contest: Codeforces Round 933 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1941/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 26 Mar 2024 05:07:42 AM EET
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
bool isZeros(vi arr) {
  for (auto &it : arr) {
    if (it != 0)
      return false;
  }
  return true;
}
const int N = 1e6;
void solve() {
  int n;
  cin >> n;
  vi arr(n);
  cin >> arr;
  for (int i = 1; i < n - 1; ++i) {

    arr[i] -= arr[i - 1] * 2;
    arr[i + 1] -= arr[i - 1];
    arr[i - 1] -= arr[i - 1];
    if (arr[i] < 0 || arr[i + 1] < 0) {
      no;
      return;
    }
  }
  if (isZeros(arr))
    yes;
  else
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
