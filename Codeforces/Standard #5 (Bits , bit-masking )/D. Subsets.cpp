// ﷽
// Contest: Standard #5 (Bits , bit-masking )
// Judge: Codeforces
// URL: https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 15 Mar 2025 11:50:57 PM EET
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
  vector<vector<int>> ans;

  for (int mask = 0; mask < (1 << n); ++mask) {
    vector<int> sub;
    for (int i = 0; i < n; ++i) {
      if (mask & (1 << i)) {
        sub.push_back(v[i]);
      }
    }
    ans.push_back(sub);
  }

  sort(ans.begin(), ans.end());

  for (auto &it : ans) {
    for (auto i : it) {
      cout << i << ' ';
    }
    cout << endl;
  }
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
