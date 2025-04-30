// ﷽
// Contest: Standard #5 (Bits , bit-masking )
// Judge: Codeforces
// URL: https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/E
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 13 Mar 2025 09:46:36 AM EET
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
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int ans = 0;
  auto go = [&](auto &&go, int i, int ods, int evs) -> void {
    if (i == n) {
      if (evs > ods) {
        ans++;
      }
      return;
    }

    go(go, i + 1, ods + (v[i] & 1), evs + ((v[i] & 1) ^ 1));

    go(go, i + 1, ods, evs);
  };

  go(go, 0, 0, 0);

  cout << ans << endl;
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
