// ﷽
// Contest: Codeforces Round 234 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/400/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 21 Jun 2024 12:05:48 PM EEST
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
  int n,m;cin>>n>>m;
  vector<string>arr(n);
  cin>>arr;
  int ans=INT_MIN;
  set<int>diff;
  for(int i=0;i<n;++i){
    int l=arr[i].find('G'),r=arr[i].find('S');
    if(l>r){cout<<-1;return;}
    int tmp=r-l;
    diff.insert(tmp);
  }
  cout << diff.size() << endl;

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
