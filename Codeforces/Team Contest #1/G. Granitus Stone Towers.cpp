// ﷽
// Contest: Team Contest #1
// Judge: Codeforces
// URL: https://codeforces.com/group/qxlLGDBwj5/contest/528100/problem/G
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 24 Jun 2024 11:56:50 AM EEST
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
  vi arr(n+1,0);
  for(int i=1;i<=n;++i){
    cin >> arr[i];
  }

  sort(all(arr));
  arr.resize(unique(all(arr)) - arr.begin());
  debug(arr);

  int f=0;
  for(int i=1;i<=arr.size();++i){
    int tmp=arr[i]-arr[i-1];
    if(tmp!=1)break;
    f^=1;
  }
  if(f)cout<<"Bobius";
  else cout<<"Alicius";
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
