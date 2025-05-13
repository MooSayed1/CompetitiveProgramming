// ﷽
// Contest: SPOJ
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/SPOJ-KQUERY
// Memory Limit: 1536
// Time Limit: 1000
// Start: Mon 12 May 2025 06:59:32 AM EEST
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
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};

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

vi arr;
struct SqrtD {
  vector<vi> blks;
  int sq = 0;
  SqrtD(vi &arr, int n) {
    sq = ceil(sqrt(n));
    blks.resize((n + sq - 1) / sq);

    for (int i = 0; i < n; ++i) {
      int blkNum = i / sq;
      blks[blkNum].push_back(arr[i]);
    }
    for (auto &it : blks) {
      sort(all(it));
    }
  }
  int query(int l, int r, int val) {
    int ans = 0;
    while (l <= r) {
      int blkNum = l / sq;
      if (l % sq == 0 && l + sq <= r) {
        auto it = upper_bound(all(blks[blkNum]), val);
        // if (it != blks[blkNum].end())
        ans += blks[blkNum].end() - it;
        l += sq;
      } else {
        ans += (arr[l] > val);
        ++l;
      }
    }
    return ans;
  }
};

void solve() {
  int n, q;
  cin >> n;
  arr.resize(n);
  cin >> arr;
  cin >> q;
  SqrtD sqt(arr, n);
  while (q--) {
    int l, r, x;
    cin >> l >> r >> x;
    cout << sqt.query(--l, --r, x) << endl;
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
