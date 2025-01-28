// ﷽
// Contest: Codeforces Round 952 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1985/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 12 Jun 2024 03:08:25 AM EEST
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
  int n,m;
  cin >> n >> m;
  vector<string>arr(n);
  for(auto&it:arr)cin>>it;
  int ans=INT_MIN;
  int cnt;
  pair<int,int>pr={0,0};
  for(int j=0;j<m;j++){
    cnt=0;
    for(int i=0;i<n;i++){
      if(arr[i][j]=='#')cnt++;
    }
    if(ans<cnt){
      ans=cnt;
      pr.first=ceil(ans/2.0);
      pr.second=j;
    }
  }
  cnt=0;
  for(int i=0;i<n;++i){
    if(arr[i][pr.second]=='#'){
      cnt++;
      if(cnt==pr.first){
        pr.first=i;break;
      }
    }
  }
  cout << pr.first +1 << ' ' << pr.second + 1<< endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin>>t;
  while (t--)
    solve();
  return 0;
}
