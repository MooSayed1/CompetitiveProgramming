// ﷽
// Contest: ACPC Scientific Committee Archive
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/537640/problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 23 Jul 2024 04:20:36 PM EEST
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

void solve() {
  int n;cin>>n;
  map<int,int>mp;
  int inx=1;
  for(int i=0;i<n;++i){
    int x;cin>>x;
    mp[x]=inx++;
  }
  int cur=0,ans=0;
  int q;cin>>q;
  while(q--){
    int op,x;
    cin>>op>>x;
    if(op&1){
      cur+=x;
    }else{
      if(!mp[x]){
        cout<< -1 << endl;
        continue;
      }
      ans = (mp[x]+cur) % n;
      cout << ((ans<=0)?  ans + n : ans )<< endl;
    }
  }
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
