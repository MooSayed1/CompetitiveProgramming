// ﷽
// Contest: Codeforces Round 1019 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2103/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 21 Apr 2025 05:09:44 PM EET
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
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;
const int OO = 2e9;

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
  int n,k;
  cin >> n >> k;
  vi a(n);
  cin >> a;

  vi pref(n + 1);
  for (int i = 0; i < n; i++) {
    pref[i + 1] = pref[i] + (a[i] <= k);
  }

  vector<char> med1(n + 1, 0), med3(n + 2, 0), any3(n + 2, 0);
  for (int i = 1; i <= n; i++) {
    int m = i, cnt = pref[i];
    if (2 * cnt >= m + (m & 1))
      med1[i] = 1;
  }
  for (int i = 1; i <= n; i++) {
    int m = n - i + 1, cnt = pref[n] - pref[i - 1];
    if (2 * cnt >= m + (m & 1))
      med3[i] = 1;
  }
  bool flag = 0;
  for (int i = n; i >= 1; i--) {
    flag |= med3[i];
    any3[i] = flag;
  }

  vector<char> goodMid(n + 1, 0);

  int mn[2] = {0, OO};
  for (int r = 1; r <= n; r++) {
    int V = 2 * pref[r] - r, p = r & 1;
    if (mn[p] <= V || mn[1 - p] <= V - 1)
      goodMid[r] = 1;
    mn[p] = min(mn[p], V);
  }

  bool f = 0;
  for (int r = 2; r <= n - 1 && !f; r++) {
    if (goodMid[r] && med3[r + 1])
      f = true;
  }

  if (!f) {
    reverse(all(a));
    pref.assign(n + 1, 0);
    for (int i = 0; i < n; i++) {
      pref[i + 1] = pref[i] + (a[i] <= k);
    }
    vector<char> med3R(n + 2, 0), tmpR(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      int m = n - i + 1, cnt = pref[n] - pref[i - 1];
      if (2 * cnt >= m + (m & 1))
        med3R[i] = 1;
    }
    mn[0] = 0;
    mn[1] = OO;
    for (int r = 1; r <= n; r++) {
      int V = 2 * pref[r] - r, p = r & 1;
      if (mn[p] <= V || mn[1 - p] <= V - 1)
        tmpR[r] = 1;
      mn[p] = min(mn[p], V);
    }
    for (int r = 2; r <= n - 1 && !f; r++) {
      if (tmpR[r] && med3R[r + 1]){
        cout << "YES\n";return;
      }
    }
  }

  if (!f) {
    for (int l = 1; l <= n - 2; l++) {
      if (med1[l] && any3[l]) {
        f = true;
        break;
      }
    }
  }

  cout << (f ? "YES\n" : "NO\n");
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
