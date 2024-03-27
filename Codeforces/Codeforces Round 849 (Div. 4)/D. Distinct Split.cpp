// ﷽
// Contest: Codeforces Round 849 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1791/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 24 Mar 2024 06:03:00 AM EET
//
#include <algorithm>
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
  int pre[n + 1] = {}, suf[n + 2] = {};
  int frq[26]{};
  int frq2[26]{};
  for (int i = 0, j = n - 1; i < n; ++i, --j) {
    pre[i + 1] = pre[i] + (frq[s[i] - 'a'] == 0);
    frq[s[i] - 'a']++;

    suf[j] = suf[j + 1] + (frq2[s[j] - 'a'] == 0);
    frq2[s[j] - 'a']++;
  }
  debug_itr(pre, pre + n + 1);
  debug_itr(suf, suf + n + 2);
  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    ans = max(ans, suf[i] + pre[i]);
  }
  cout << ans << endl;
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
