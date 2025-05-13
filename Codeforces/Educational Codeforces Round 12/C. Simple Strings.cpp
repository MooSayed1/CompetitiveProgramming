// ﷽
// Contest: Educational Codeforces Round 12
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/665/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 10 May 2025 05:55:23 AM EEST
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
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n - 1; ++i) {
    if (s[i] == s[i + 1]) {
      if (s[i] == 'z') {
        if (i + 2 < n) {
          if (s[i + 2] == (char)(s[i] - 1)) {
            s[i + 1] = s[i] - 2;
            continue;
          }
        }
        s[i + 1] = (char)('z' - 1);
        continue;
      }
      if (i + 2 < n) {
        if (char(s[i] + 1) == s[i + 2]) {
          if(s[i]+2>'z'){s[i+1]='a';continue;}
          s[i + 1] = (char)(s[i] + 2);
          continue;
        }
      }
      s[i + 1] = (char)(s[i] + 1);
    }
  }

  cout << s << endl;
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
