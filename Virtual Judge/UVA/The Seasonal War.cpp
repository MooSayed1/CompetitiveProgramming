// ﷽
// Contest: UVA
// Judge: Virtual Judge
// URL: https://vjudge.net/problem/UVA-352
// Memory Limit: 1024
// Time Limit: 3000
// Start: Wed 30 Apr 2025 07:19:33 PM EEST
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
  int n; 
  int cnt=0;

  while(cin>>n){
    vector<vector<char>>arr(n,vector<char>(n));
    vector<vector<bool>>vis(n,vector<bool>(n));
    cin>>arr;
    cnt++;

    auto go = [&](auto&go,int i,int j) -> void {
      vis[i][j]=1;

      for(int k=0;k<8;++k){
        int ni = i + dx[k];
        int nj = j + dy[k];
        if((i+dx[k]>=0&&i+dx[k]<n)&&(j+dy[k]>=0&&j+dy[k]<n))
          if(!vis[ni][nj]&&arr[ni][nj]=='1')
            go(go,i+dx[k],j+dy[k]);
      }
    };

    int ans=0;
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        if(!vis[i][j]&&arr[i][j]=='1'){
          ans++;
          go(go,i,j);
        }
      }
    }

    cout << "Image number " << cnt << " contains " <<  ans << " war eagles." << endl;
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
