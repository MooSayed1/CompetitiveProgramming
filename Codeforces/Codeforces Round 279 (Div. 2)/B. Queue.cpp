// ﷽
// Contest: Codeforces Round 279 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/490/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 08 Jun 2024 08:01:54 AM EEST
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

#define ll long long
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

void solve() {
  int n;cin>>n;
  vector<pair<int,int>>arr(n);
  for(auto&it:arr)cin>>it.first>>it.second;
  debug(arr);

  map<int,int>mp;
  for(int i=0;i<n;++i){
    int l=arr[i].first,r=arr[i].second;
    mp[l]=r;
  }

  vi frq(1e6,-1);set<int>st;
  vi res(n*2);
  for(int i=0;i<n;++i){
    int l=arr[i].first,r=arr[i].second;
    frq[l]=0,frq[r]=0;
    frq[l]++,frq[r]++;
    if(l==0){res[2]=r;}
    st.insert(r);
  }
  
  for(int i=0;i<n;++i){
    int l=arr[i].first;
    if(frq[l]==1&&st.find(l)==st.end()){
      res[1]=l;
      break;
    }
  }

  for(int i=3;i<=n;++i){
    res[i]=mp[res[i-2]];
  }

  for(int i=1;i<=n;++i)cout<<res[i]<<' ';

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
