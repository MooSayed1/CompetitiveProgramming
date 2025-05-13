// ﷽
// Contest: unknown_contest
// Judge: Library Checker
// URL: https://judge.yosupo.jp/problem/point_set_range_frequency
// Memory Limit: 1024
// Time Limit: 10000
// Start: Sun 11 May 2025 01:56:14 AM EEST
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

int n, q, SQ;
vi arr;

vector<unordered_map<int, int>> blkFrq;

void preProcess() {
  for (int i = 0; i < n; ++i) {
    int blkNum = i / SQ;
    blkFrq[blkNum][arr[i]]++;
  }
}

int query(int l, int r, int x) {
  int ans = 0;
  while (l < r && l < n) {
    if (l % SQ == 0 && l + SQ <= r) {
      if (blkFrq[l / SQ].count(x))
        ans += blkFrq[l / SQ][x];
      l += SQ;
    } else {
      ans += (arr[l] == x);
      l++;
    }
  }
  return ans;
}

void update(int inx, int val) {
  int b = inx / SQ;
  int old = arr[inx];
  auto &mp = blkFrq[b];
  if (--mp[old] == 0)
    mp.erase(old);
  mp[val]++;
  arr[inx] = val;
}

void solve() {
  cin >> n >> q;
  arr.resize(n);
  cin >> arr;
  SQ = max(1LL, (int)ceil(sqrt(n)));
  blkFrq.resize(n / SQ + 10);
  preProcess();

  while (q--) {
    int op;
    cin >> op;
    if (op == 0) {
      int pos, val;
      cin >> pos >> val;
      if (n > 0 && pos >= 0 && pos <= n)
        update(pos, val);
    } else {
      int l, r, x;
      cin >> l >> r >> x;
      cout << query(l, r, x) << endl;
    }
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
