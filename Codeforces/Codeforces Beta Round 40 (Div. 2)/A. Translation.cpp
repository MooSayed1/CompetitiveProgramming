// ﷽
// Contest: Codeforces Beta Round 40 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/41/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 29 Jan 2024 08:20:41 PM EET
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
string s1,s2;
cin>>s1>>s2;
reverse (all(s1));
if(s1==s2)
  cout<<"YES"<<endl;
else 
  cout<<"NO"<<endl;
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
