// ﷽
// Contest: Sheet #6 (Recursion)
// Judge: Codeforces
// URL: https://codeforces.com/group/0J9Dua2OGM/contest/429500/problem/C
// Memory Limit: 64
// Time Limit: 1000
// Start: Sun 28 Jan 2024 05:07:02 PM EET
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

void solve(int n) {

if(n==0)
  return ;
cout<<n<<" ";
return solve(n-1);

}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin>>t;
    solve(t);  
  return 0;
}
