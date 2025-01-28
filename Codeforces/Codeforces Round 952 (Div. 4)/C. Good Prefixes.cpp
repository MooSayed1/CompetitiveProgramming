// ﷽
// Contest: Codeforces Round 952 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1985/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 14 Jun 2024 04:03:30 PM EEST
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
  int n;cin >> n;
  vi arr(n);
  cin >> arr;
  vector<ll> pref(n+1);
  for(int i=1;i<=n;++i){
    pref[i]=pref[i-1]+arr[i-1];
  }
  int cnt=0;
  int temp=INT_MIN;
  for(int i = 0; i < n; ++i){
    temp=max(temp,arr[i]);
    if(pref[i+1] - temp == temp){
      cnt++;
    }
  }
  cout << cnt << endl;
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
