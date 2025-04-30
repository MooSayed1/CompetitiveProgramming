// ﷽
// Contest: Educational Codeforces Round 178 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2104/problem/B
// Memory Limit: 512
// Time Limit: 2000
// Start: Mon 28 Apr 2025 05:45:18 PM EEST
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
  int n;cin>>n;
  vi arr(n);
  map<int,int>mp;
  for(auto&it:arr){
    cin>>it;
    mp[it]++;
  }
  vi pref(n+1,0);
  for(int i=0;i<n;++i){pref[i+1]=pref[i]+arr[i];}
  debug(pref);
  for(int i=n-1;i>=0;--i){
    auto it = mp.upper_bound(arr[i]);
    int ans = pref[n] - pref[n-(n-i-1)-1];
    debug(ans);
    if (it != mp.end()) {
      ans-=arr[i];
      ans+=mp.rbegin()->first;
    }
    mp[arr[i]]--;
    if(mp[arr[i]]==0){
      mp.erase(arr[i]);
    }
      
    cout << ans << " ";
  }
  cout << endl;
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
