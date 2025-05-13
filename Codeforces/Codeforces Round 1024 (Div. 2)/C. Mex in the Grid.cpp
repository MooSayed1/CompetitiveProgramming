// ﷽
// Contest: Codeforces Round 1024 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2102/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 11 May 2025 06:03:48 PM EEST
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
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

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

  vector<vi> arr(n, vi(n, 0));

  int x = n / 2, y = (n - 1) / 2;

  int val = 0;
  arr[x][y] = val++;

  int dir = 0;
  int ln = 1;

  while (val < 1 * n * n) {
    for (int i = 0; i < 2 && val < 1 * n * n; ++i) {
      for (int s = 0; s < ln && val < 1 * n * n; ++s) {
        x += dx[dir];
        y += dy[dir];
        arr[x][y] = val++;
      }
      dir = (dir + 1) % 4;
    }
    ln++;
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << arr[i][j] << ' ';
    }
    cout<<endl;
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
