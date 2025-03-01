// ﷽
// Contest: Codeforces Round 406 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/787/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 28 Feb 2025 04:19:13 AM EET
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
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    map<int, int> mp;
    bool f = 0;
    for (int i = 0; i < k; ++i) {
      int x;
      cin >> x;
      mp[-x]++;
      if (mp[x])
        f = 1;
    }
    if (!f) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
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
