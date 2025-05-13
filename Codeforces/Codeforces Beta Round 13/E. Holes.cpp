// ﷽
// Contest: Codeforces Beta Round 13
// Judge: Codeforces
// URL: https://codeforces.com/contest/13/problem/E
// Memory Limit: 64
// Time Limit: 1000
// Start: Sun 11 May 2025 03:29:39 AM EEST
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

int n, q, sq;
vi arr;
vi c;   // how many jumps to get out from this block
vi w;   // which index i'll be at in the next block
vi lst; // last hole visited before exiting this block segment

void rebuild_block(int blkNum) {
  int L = blkNum * sq;
  int R = min((int)n - 1, (blkNum + 1) * sq - 1);
  for (int j = R; j >= L; --j) {
    int nxt = j + arr[j];
    if (nxt >= n || nxt / sq != blkNum) {
      c[j]   = 1;
      w[j]   = nxt;
      lst[j] = j;
    } else {
      c[j]   = c[nxt] + 1;
      w[j]   = w[nxt];
      lst[j] = lst[nxt];
    }
  }
}

void solve() {
  cin >> n >> q;
  arr.resize(n);
  cin >> arr;
  c.assign(n, 0);
  w.assign(n, 0);
  lst.assign(n, 0);
  sq = sqrt(n) + 1;
  int numBlocks = (n + sq - 1) / sq;
  for (int b = 0; b < numBlocks; ++b) {
    rebuild_block(b);
  }

  while (q--) {
    int op, i;
    cin >> op >> i;
    --i;
    if (op == 0) {
      int b;
      cin >> b;
      arr[i] = b;
      rebuild_block(i / sq);
    } else {
      int total = 0;
      int lastVisited = i;
      while (i < n) {
        total += c[i];
        lastVisited = lst[i];
        i = w[i];
      }
      cout << lastVisited + 1 << " " << total << endl;
    }
  }
}

int32_t main() {
  fastio();
  solve();
  return 0;
}
