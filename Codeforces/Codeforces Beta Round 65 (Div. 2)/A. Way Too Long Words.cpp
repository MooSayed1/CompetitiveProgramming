// ﷽
// Contest: Codeforces Beta Round 65 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/71/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 24 Dec 2023 10:15:49 AM EET
//
#include <bits/stdc++.h>
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
  int len = s.size();
  if (len <= 10) {
    cout << s << endl;
    return;
  }
  cout << s[0] << len - 2 << s[len - 1] << endl;
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin>>t;
  while (t--)
    solve();
  return 0;
}
