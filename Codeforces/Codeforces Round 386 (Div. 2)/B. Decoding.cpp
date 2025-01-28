// ﷽
// Contest: Codeforces Round 386 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/746/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 31 Jan 2024 11:19:10 PM EET
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
  string s = "";
  deque<char> str;
  int n;
  cin >> n;
  cin >> s;

  for (int i = 0; i < n; ++i) {
    if ((n - i) % 2 == 1)
      str.push_back(s[i]);
    else
      str.push_front(s[i]);
  }
  for(auto&it:str)
    cout<<it;
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
