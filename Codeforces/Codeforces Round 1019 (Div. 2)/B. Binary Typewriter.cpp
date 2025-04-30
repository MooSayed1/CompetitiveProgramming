// ﷽
// Contest: Codeforces Round 1019 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2103/problem/B
// Memory Limit: 256
// Time Limit: 1500
// Start: Mon 21 Apr 2025 04:41:43 PM EET
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
  string s;
  cin >> n >> s;
  int sumDiff = 0;
  for (int i = 0; i + 1 < n; i++) {
    if (s[i] != s[i + 1])
      sumDiff++;
  }
  int ans = n + sumDiff + (s[0] == '1');

  vi pref, suff;
  if (s[0] == '1')
    pref.push_back(0);

  for (int i = 0; i + 1 < n; i++) {
    if (s[i] == '0' && s[i + 1] == '1')
      pref.push_back(i + 1);
    else if (s[i] == '1' && s[i + 1] == '0')
      suff.push_back(i + 1);
  }

  if (pref.size() >= 2 && pref.back() - pref.front() >= 2)
    ans -= 2;
  else if (suff.size() >= 2 && suff.back() - suff.front() >= 2)
    ans -= 2;
  else if (sumDiff > 0 && (s[0] == '1' || s[n - 1] == '0'))
    ans--;

  cout << ans << "\n";
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
