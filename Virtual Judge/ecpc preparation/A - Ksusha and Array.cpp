// ﷽
// Contest: ecpc preparation
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/715915#problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 10 May 2025 04:58:46 AM EEST
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
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;
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

void solve() {
  int n;cin>>n;
  vi arr(n);cin>>arr;
  bool f=0;
  int ans=arr[0];
  if(arr[0]==1)f=1;
  for(int i=1;i<n;++i){
    ans=gcd(arr[i],ans);
    if(arr[i]==1)f=1;
  }
  if(ans==1){
    if(f)cout<<1<<endl;
    else cout<<-1<<endl;
  }else{
    f=0;
    for(auto&it:arr){
      if(it==ans){
        cout<<ans<<endl;return;
      }
    }
    cout<<-1<<endl;
  }
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
