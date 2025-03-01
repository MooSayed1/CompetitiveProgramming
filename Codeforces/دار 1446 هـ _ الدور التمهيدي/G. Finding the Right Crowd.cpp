// ﷽
// Contest: دار 1446 هـ | الدور التمهيدي
// Judge: Codeforces
// URL: https://codeforces.com/group/6aLUitEJUs/contest/590944/problem/G
// Memory Limit: 512
// Time Limit: 3000
// Start: Tue 25 Feb 2025 08:27:04 PM EET
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
  vector<vector<int>> groups(n);
  vector<vector<int>> pref(n);

  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    groups[i].resize(m);
    for (int j = 0; j < m; j++)
      cin >> groups[i][j];

    sort(groups[i].begin(), groups[i].end());

    pref[i].resize(m + 1, 0);
    for (int j = 1; j <= m; j++)
      pref[i][j] = pref[i][j - 1] + groups[i][j - 1];
  }

  int q;
  cin >> q;
  while (q--) {
    int x;
    cin >> x;
    int ans = -1, mn = LLONG_MAX;

    for (int i = 0; i < n; i++) {
      int m = groups[i].size();

      int idx = lower_bound(groups[i].begin(), groups[i].end(), x) -
                groups[i].begin();

      int nigvSum = (idx * x) - pref[i][idx];
      int posSum = (pref[i][m] - pref[i][idx]) - (m - idx) * x;
      int diff = nigvSum + posSum;

      if (diff < mn) {
        mn = diff;
        ans = i + 1;
      }
    }

    cout << ans << " ";
  }
  cout << "\n";
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
