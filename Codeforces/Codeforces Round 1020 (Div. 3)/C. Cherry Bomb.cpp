// ﷽
// Contest: Codeforces Round 1020 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2106/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 24 Apr 2025 05:03:45 PM EET
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

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;

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

void solve() {
  int n, k;
  cin >> n >> k;
  vi arr(n), brr(n);
  int mn=INT_MAX,mx=INT_MIN;
  for(auto&it:arr){
    cin>>it;
    mn=min(mn,it);
    mx=max(mx,it);
  }
  bool f = true;
  for (auto&it:brr) {
    cin >> it;
    if (it != -1)
      f = 0;
  }
  if (f) {
    cout << max(0LL, mn + k - mx + 1) << endl;
    return;
  }
  int x = -1;
  f = true;
  for (int i = 0; i < n; ++i) {
    if (brr[i] != -1) {
      if (x == -1)
        x = arr[i] + brr[i];
      else if (arr[i] + brr[i] != x)
        f = 0;
    }
  }

  if (!f) {
    cout << 0 << endl;
    return;
  }

  for (int i = 0; i < n; ++i) {
    if (brr[i] == -1) {
      int val = x - arr[i];
      if (val < 0 || val > k) {
        cout << 0 << endl;
        return;
      }
    }
  }

  cout << 1 << endl;
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
