// ﷽
// Contest: Codeforces Round 310 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/556/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 26 Jan 2024 05:11:53 PM EET
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
  int n;
  cin>>n;
  int frq[2]={0};
  string num;
  cin>>num;
  for(int i=0;i<n;++i)
  {
    frq[num[i]-'0']++;
  }

  int res=frq[0]-frq[1];
  cout<<abs(res);
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
