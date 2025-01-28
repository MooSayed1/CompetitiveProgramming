// ﷽
// Contest: Codeforces Round 970 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2008/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 01 Sep 2024 05:44:56 PM EEST
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
#define f(i, a, b) for (int i = a; i < b; i++)
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int,int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  double nn=sqrt((float(n)));
  debug(nn); 
  if(nn*nn==n){
    for(int i=0;i<nn;i++){
      if(s[i]=='1')continue;
      else{no;return;}
    }
    for(int i=n-1;i>=n-nn;i--){
      if(s[i]!='1'){no;return;}
    }
    for(int i=nn;i<n-nn;++i){
      int tmp=(int)nn;
      if((i%tmp==0)||(i%tmp==nn-1)){
        if(s[i]!='1'){
          no;return;
        }
      }else{
        if(s[i]!='0'){
          no;return;
        }
      }
    }
    yes;
  }
  else no;
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
