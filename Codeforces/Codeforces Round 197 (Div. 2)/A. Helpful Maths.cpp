// ﷽
// Contest: Codeforces Round 197 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/339/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 24 Dec 2023 10:44:14 AM EET
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
  int frq[4] = {0};
  for (int i = 0; i < s.size(); ++i)
    if (s[i]!='+')
      frq[s[i] - '0']++;
  string res = "";
  for (int i = 1; i <= 3; ++i) {
    while (frq[i]--) {
      res.push_back((char)(i + '0'));
      res.push_back('+');
    }
  }
  res.pop_back();
  cout << res << endl;
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
