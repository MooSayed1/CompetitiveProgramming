// ﷽
// Contest: Codeforces Round 1024 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2102/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 11 May 2025 06:57:56 PM EEST
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

void solve() {
  int n;
  cin >> n;
  vi a(n);cin >> a;

  vi odd, even;
  for (int i = 0; i < n; i++) {
    if (i & 1 ^ 1)
      odd.push_back(a[i]);
    else
      even.push_back(a[i]);
  }

  sort(all(odd)),sort(all(even));

  int ce = 0, co = 0;
  for (int i = 0; i < n; i++) {
    if (i & 1 ^ 1) {
      cout << odd[co++];
    } else {
      cout << even[ce++];
    }
    cout << ' ';
  }
  cout << endl;
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
