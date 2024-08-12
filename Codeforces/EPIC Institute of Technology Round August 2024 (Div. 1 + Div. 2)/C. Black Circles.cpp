// ﷽
// Contest: EPIC Institute of Technology Round August 2024 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2002/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 11 Aug 2024 06:09:35 PM EEST
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
int calc(int x1,int y1,int x2,int y2){
  return ((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
}
void solve() {
  int n;cin>>n;
  vector<pair<int,int>>arr(n);
  for(auto&it:arr){
    cin >> it.first >> it.second;
  }
  int xs,ys,xt,yt;
  cin >> xs >> ys >> xt >> yt;
  int tmp=calc(xs,ys,xt,yt);

  for(auto&it:arr){
    int dis=calc(it.first,it.second,xt,yt);
    if(dis<=tmp){
      no;
      return;
    }
  }
  yes;
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
