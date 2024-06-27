// ﷽
// Contest: CROC 2016 - Elimination Round
// Judge: Codeforces
// URL: https://codeforces.com/contest/645/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 20 Jun 2024 01:52:58 AM EEST
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
  vector<string>arr(2);
  for(auto&it:arr)cin>>it;
  vector<string>brr(2);
  for(auto&it:brr)cin>>it;
  char ch1,ch2;
  for (int  i = 0; i < 2; i++) {
    for (int  j = 0; j < 2; j++) {
      if(arr[i][j]=='A'){
        if(i==0&&j==0){
          if(arr[0][1]!='X')
            ch1=arr[0][1];
          else ch1=arr[1][1];
        }

        if(i==0&&j==1){
          if(arr[1][1]!='X')
            ch1=arr[1][1];
          else ch1=arr[1][0];
        }

        if(i==1&&j==1){
          if(arr[1][0]!='X')
            ch1=arr[1][0];
          else ch1=arr[0][0];
        }

        if(i==1&&j==0){
          if(arr[0][0]!='X')
            ch1=arr[0][0];
          else ch1=arr[0][1];
        }
        goto P;
      }
    }
  }
P:
  
  for (int  i = 0; i < 2; i++) {
    for (int  j = 0; j < 2; j++) {
      if(brr[i][j]=='A'){
        if(i==0&&j==0){
          if(brr[0][1]!='X')
            ch2=brr[0][1];
          else ch2=brr[1][1];
        }

        if(i==0&&j==1){
          if(brr[1][1]!='X')
            ch2=brr[1][1];
          else ch2=brr[1][0];
        }

        if(i==1&&j==1){
          if(brr[1][0]!='X')
            ch2=brr[1][0];
          else ch2=brr[0][0];
        }

        if(i==1&&j==0){
          if(brr[0][0]!='X')
            ch2=brr[0][0];
          else ch2=brr[0][1];
        }
        goto G;
      }
    }
  }
G:
  if(ch1==ch2)yes;
  else no;
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
