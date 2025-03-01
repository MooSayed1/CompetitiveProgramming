// ﷽
// Contest: Codeforces Round 1006 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2072/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 25 Feb 2025 05:42:37 PM EET
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

const int MAX_N = 2005;
struct SegNode {
  int mn;
  int idx;
};

struct SegmentTree {
  int n;
  vector<SegNode> tree;

  SegmentTree(const vector<int> &arr) {
    n = arr.size();
    tree.resize(4 * n);
    build(arr, 1, 0, n - 1);
  }

  void build(const vector<int> &arr, int id, int l, int r) {
    if (l == r) {
      tree[id].mn = arr[l];
      tree[id].idx = l;
      return;
    }
    int mid = (l + r) / 2;
    build(arr, id * 2, l, mid);
    build(arr, id * 2 + 1, mid + 1, r);
    if (tree[id * 2].mn <= tree[id * 2 + 1].mn) {
      tree[id].mn = tree[id * 2].mn;
      tree[id].idx = tree[id * 2].idx;
    } else {
      tree[id].mn = tree[id * 2 + 1].mn;
      tree[id].idx = tree[id * 2 + 1].idx;
    }
  }

  SegNode query(int id, int l, int r, int ql, int qr) {
    if (ql > r || qr < l)
      return {INT_MAX, -1};
    if (ql <= l && r <= qr)
      return tree[id];
    int mid = (l + r) / 2;
    SegNode leftNode = query(id * 2, l, mid, ql, qr);
    SegNode rightNode = query(id * 2 + 1, mid + 1, r, ql, qr);
    if (leftNode.mn <= rightNode.mn)
      return leftNode;
    else
      return rightNode;
  }

  SegNode query(int ql, int qr) { return query(1, 0, n - 1, ql, qr); }
};

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  cin>>arr;

  vector<bool> appears(MAX_N + 1, false);
  for (int i = 0; i < n; i++) {
    appears[arr[i]] = true;
  }

  vector<vector<int>> R(MAX_N + 1);
  for (int x = 1; x <= MAX_N; x++) {
    if (!appears[x])
      continue;
    R[x].resize(n);
    int val = 0;
    if (arr[0] > x)
      val = 1;
    else if (arr[0] < x)
      val = -1;
    else
      val = 0;
    R[x][0] = val;
    for (int i = 1; i < n; i++) {
      int delta = 0;
      if (arr[i] > x)
        delta = 1;
      else if (arr[i] < x)
        delta = -1;
      else
        delta = 0;
      R[x][i] = R[x][i - 1] + delta;
    }
  }

  vector<SegmentTree *> SegmentTrees(MAX_N + 1, nullptr);
  for (int x = 1; x <= MAX_N; x++) {
    if (!appears[x])
      continue;
    SegmentTrees[x] = new SegmentTree(R[x]);
  }

  int dla = 0;
  int lo = 0, up = 0; 

  for (int l = 0; l < n - 1; l++) {
    int x = arr[l];
    if (SegmentTrees[x] == nullptr)
      continue;
    SegNode res = SegmentTrees[x]->query(l + 1, n - 1);
    int candidateDelta = res.mn - R[x][l];
    if (candidateDelta < dla) {
      dla = candidateDelta;
      lo = l;
      up = res.idx;
    }
  }

  int outL, outR;
  if (dla >= 0) {
    outL = 1;
    outR = 1;
  } else {
    outL = lo + 1;
    outR = up + 1;
  }
  cout << outL << " " << outR << "\n";

  for (int x = 1; x <= MAX_N; x++) {
    if (SegmentTrees[x] != nullptr) {
      delete SegmentTrees[x];
      SegmentTrees[x] = nullptr;
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
