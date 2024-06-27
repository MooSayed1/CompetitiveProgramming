// ﷽
// Contest: Codeforces Round 105 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/148/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 15 Jun 2024 08:56:16 AM EEST
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
  int vp,vd,t,f,c;
  cin >> vp >> vd >> t >> f >> c;
  if(vd<=vp){cout<<0;return;}
  double start=vp*t;
  int cnt=0;
  for(double i = start;i < c;i+=(f+i/vd)*vp){
     double time=i/(vd-vp); // time of 
     i+=time*vp;  // pos + ((time * speed)=distance) --> new position 
     if(i>=c)break; // if this new position reched the castle then break 
     cnt++; // if no: add (f+i/vd)=total time * vp --> total distance 
  }
  cout << cnt << endl;
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
