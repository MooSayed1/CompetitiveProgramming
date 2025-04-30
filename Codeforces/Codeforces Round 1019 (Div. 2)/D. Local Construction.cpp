// ﷽
// Contest: Codeforces Round 1019 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2103/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 21 Apr 2025 05:18:59 PM EET
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
  int n;
  cin >> n;
  vi a(n);
  int maxK = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] > 0)
      maxK = max(maxK, a[i]);
    else
      cnt++;
  }
  vi arr(n);
  iota(all(arr), 0);

  vi p(n, -1);
  int l = 1, r = n;

  for (int k = 1; k <= maxK; k++) {
    vi tmp, rest;
    for (int idx : arr) {
      if (a[idx] == k)
        tmp.push_back(idx);
      else
        rest.push_back(idx);
    }
    if (tmp.empty())
      continue;

    if (k & 1) {
      for (int idx : tmp) {
        p[idx] = r--;
      }
    } else {
      for (int idx : tmp) {
        p[idx] = l++;
      }
    }
    arr.swap(rest);
  }

  if (arr.size() == 1) {
    p[arr[0]] = l;
  }

  for (int i = 0; i < n; i++) {
    cout << p[i] << (i + 1 < n ? ' ' : '\n');
  }
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
