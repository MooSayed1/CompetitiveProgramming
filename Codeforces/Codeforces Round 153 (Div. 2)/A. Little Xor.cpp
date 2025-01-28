// ﷽
// Contest: Codeforces Round 153 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/252/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 17 May 2024 05:30:30 PM EEST
// Reading Time : 
// Thinking Time : 
// Coding Time : 
// Comments : 
#include<bits/stdc++.h>

#ifdef ALGOAT
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long

using namespace std;

void solve() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0 ; i<n ; i++)
    cin>>a[i];

  int ans=0;
  for(int i=0 ; i<n ; i++){
    int m=0;
    for(int j=i ; j<n ; j++){
      m^=a[j];
      ans=max(m,ans);
    }
  }
  cout<<ans;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
  // cin>>n;
  while (n--)
    solve();
  return 0;
}
