// ﷽
// Contest: Educational Codeforces Round 22
// Judge: Codeforces
// URL: https://codeforces.com/contest/813/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 20 Jun 2024 01:27:37 AM EEST
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
  vi arr(n);
  ll sum=0;
  for(auto&it:arr){
    cin >> it;sum+=it;
  }
  int m;cin>>m;
  vi res;
  bool f=0;
  while(m--){
    int a,b;cin>>a>>b;
    if(sum>=a&&sum<=b){
      f=1;
    }
    res.push_back(a);
    res.push_back(b);
  }
  debug(sum);
  if(f){cout<<sum<<endl;return;}
  auto it=upper_bound(all(res),sum);
  if(it!=res.end()){
    cout <<*it<<endl;
  }else cout<<-1<<endl;
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
