// ﷽
// Contest: Codeforces Round 1020 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2106/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 24 Apr 2025 05:44:42 PM EET
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
  vi arr(n+1),brr(m+1);
  for(int i=1;i<=n;++i)cin>>arr[i];
  for(int i=1;i<=m;++i)cin>>brr[i];

  vi pref(n+1,0);
  for (int i= 1;i <=n;i++) {
    if (pref[i - 1] < m && arr[i] >= brr[pref[i - 1] + 1])
      pref[i] = pref[i - 1] + 1;
    else
      pref[i] = pref[i - 1];
  }

  if (pref[n] == m) {
    cout << 0 << "\n";
    return;
  }

  vi suff(n + 2, 0);
  for (int i = n; i >= 1; i--) {
    if (suff[i+1] < m && arr[i] >= brr[m - suff[i+1]])
      suff[i] = suff[i+1] + 1;
    else
      suff[i] = suff[i+1];
  }

  vi diff(m + 2, 0);
  for (int p = 0; p <= n; p++) {
    int L = max(1LL, m - suff[p + 1]);
    int R = min(m, pref[p] + 1);
    if (L <= R) {
      diff[L]++;
      diff[R + 1]--;
    }
  }

  int ans = OO;
  int f = 0;
  for (int r = 1; r <= m; r++) {
    f += diff[r];
    if (f > 0) {
      ans = min(ans, brr[r]);
    }
  }

  if (ans == OO)
    cout << -1 << "\n";
  else
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
