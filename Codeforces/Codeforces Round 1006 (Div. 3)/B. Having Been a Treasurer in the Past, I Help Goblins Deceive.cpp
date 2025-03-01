// ﷽
// Contest: Codeforces Round 1006 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2072/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 25 Feb 2025 05:02:15 PM EET
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
  string s;
  cin >> s;
  int cnt1 = 0, cnt2 = 0;
  for (auto &it : s)
    if (it == '-')
      cnt1++;
    else
      cnt2++;

  if (cnt1 <= 1) {
    cout << 0 << "\n";
    return;
  } else {
    if (cnt1 & 1) {
      cout << (cnt1 / 2) * (cnt1 - (cnt1 / 2)) * cnt2 << endl;
    }else{
      cout << (cnt1 / 2) * (cnt1 / 2) * cnt2 << endl;
    }
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
