// ﷽
// Contest: Codeforces Round 1013 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2091/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 29 Apr 2025 06:25:21 PM EEST
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
  vi arr(n);
  cin >> arr;
  string s = "01032025";
  multiset<int> st;
  for (auto &it : s) {
    st.insert(it - '0');
  }
  debug(st);
  for (int i = 0; i < n; i++) {
    if (st.find(arr[i]) != st.end())
      st.erase(st.find(arr[i]));
    debug(arr[i]);
    debug(st);
    if (st.size() == 0) {
      cout << i + 1 << endl;
      return;
    }
  }
  cout << 0 << endl;
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
