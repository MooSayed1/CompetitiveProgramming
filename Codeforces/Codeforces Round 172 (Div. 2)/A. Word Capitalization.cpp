// ﷽
// Contest: Codeforces Round 172 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/281/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 25 Jan 2024 03:38:02 PM EET
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
  cin>>s;
  s[0]=toupper(s[0]);
  cout<<s;

}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  //cin>>t;
  while (t--)
    solve();  
  return 0;
}
