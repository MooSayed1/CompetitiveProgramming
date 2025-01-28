// ﷽
// Contest: Codeforces Round 577 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1201/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 15 Aug 2024 01:40:22 AM EEST
//
#include <bits/stdc++.h>
using namespace std;
#ifdef MOHAMED
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int,int>
#define OO 2e9
#define endl "\n"
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

int n,k;
bool can(int val,vi&arr){
  int ans=0;
  for(int i=n/2;i<n;++i){
    if(val-arr[i]>0){ans+=val-arr[i];}
    if(ans>k)return 0;
  }
  return (ans<=k)?1:0;
}
void solve() {
  cin >> n >> k;
  vi arr(n);
  cin >> arr;
  sort(all(arr));
  int l=0,r=2e9+10;
  while(l<=r){
    int mid=(l+r)/2;
    if(can(mid,arr)){
      l=mid+1;
    }else{
      r=mid-1;
    }
    debug(l);
  }
  cout << l - 1 << endl;
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
