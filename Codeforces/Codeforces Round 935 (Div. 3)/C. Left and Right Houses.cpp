// ﷽
// Contest: Codeforces Round 935 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1945/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 19 Mar 2024 10:10:03 PM EET
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

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define endl "\n"

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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vi pre(n + 1);
  for (int i = 0; i < n; i++) {
    pre[i + 1] = pre[i] + (s[i] == '1');
  }
  debug(pre);
  int index = -1;
  for (int i = 0; i <= n; i++) {
    if ((pre[i] <= i / 2) && ((pre[n] - pre[i]) >= (n - i + 1) / 2) &&
        (abs((n / 2.0) - index) > abs((n / 2.0) - i)))
      index = i;
    debug(index);
  }
  cout << index << endl;
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
