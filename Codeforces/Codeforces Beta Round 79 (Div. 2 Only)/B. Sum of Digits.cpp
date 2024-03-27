// ﷽
// Contest: Codeforces Beta Round 79 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/102/problem/B
// Memory Limit: 265
// Time Limit: 2000
// Start: Sat 27 Jan 2024 02:25:45 PM EET
//
#include <bits/stdc++.h>
#include <string>
using namespace std;
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back

void solve() {
  string s;
  cin >> s;
  ll cnt = 0;
  if (s.size() == 1) {
    cout << 0 << endl;
    return;
  }
P:
  ll temp = 0;
  for (int i = 0; i < s.size(); ++i) {
    temp += s[i] - '0';
  }
  cnt++;
  s = to_string(temp);
  if (s.size() > 1)
    goto P;
  cout << cnt << endl;
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
