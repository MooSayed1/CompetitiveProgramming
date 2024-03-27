// ﷽
// Contest: VK Cup 2017 - Qualification 2
// Judge: Codeforces
// URL: https://codeforces.com/contest/770/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 25 Dec 2023 10:31:19 AM EET
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
int n,k;
cin>>n>>k;
V:
 for(int i=0;i<k;++i)
 {
   cout<<(char)('a'+i);
   n--;
   if(!n)
     break;
 }
 if(n)
   goto V;
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
