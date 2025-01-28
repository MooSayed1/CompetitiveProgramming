// ﷽
// Contest: Codeforces Round 355 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/677/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 26 Dec 2023 01:11:12 PM EET
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
  int n,h;
  cin >> n>>h;
  int cnt=0; 
  int it=0;
  while(n--)
  {
    cin >> it;
    if(it>h)
      cnt+=2;
    else 
      cnt++;
  }
  cout<<cnt<<endl;
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
