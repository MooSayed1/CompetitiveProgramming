// ﷽
// Contest: Codeforces Round 966 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2000/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 13 Aug 2024 06:05:57 PM EEST
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

void solve() {
  int n;cin>>n;
  vi arr(n);
  cin >> arr;
  int m;cin >>m;
  while(m--){
    string s;
    cin >> s;
    map<char,int>mp;
    map<int,char>ma;
    if(s.size()!=arr.size()){no;continue;}
    for(int i=0;i<n;++i){
      if(mp.find(s[i])==mp.end()&&ma.find(arr[i])==ma.end()){
        mp[s[i]]=arr[i];
        ma[arr[i]]=s[i];
      }else{
        if(mp[s[i]]!=arr[i]||ma[arr[i]]!=s[i]){
          no;goto P;
        }
      }
    }
    yes;
  P:
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
