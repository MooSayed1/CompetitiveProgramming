// ﷽
// Contest: Playrix Codescapes Cup (Codeforces Round 413, rated, Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/799/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: 23 ديس, 2023 10:22:03 ص
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
  int n,t,k,d;
  cin>>n>>t>>k>>d;
  if(k>=n){
    cout<<"NO";
    return;
  }

  int tWithoutOven,tWithOven;
  // tWithoutOven=(t*n)/k;
  tWithoutOven= (n+k-1)/k*t;
  int t1=0,t2=d;
  while (n > 0) {// simulate to procces
    if (t1 <= t2) {
      t1 += t;
    } else {
      t2 += t;
    }
    n -= k;
  }
  tWithOven= max(t1,t2);
  // cout<<tWithoutOven<<endl;
  // cout<<tWithOven<<endl;
  if(tWithoutOven<=tWithOven)
    cout<<"NO"<<endl;
  else 
    cout<<"YES"<<endl;
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
