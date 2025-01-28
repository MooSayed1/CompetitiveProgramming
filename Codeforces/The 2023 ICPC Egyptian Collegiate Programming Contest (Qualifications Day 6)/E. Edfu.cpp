// ﷽
// Contest: The 2023 ICPC Egyptian Collegiate Programming Contest (Qualifications Day 6)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/532378/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 03 Jul 2024 10:25:49 AM EEST
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
  int n, k; cin>>n>>k;
  vector<int>v(n,0),pref(n+1,0);
  for (int i = 0; i < k; ++i) {
    int l,r; cin>>l>>r;
    pref[l-1]++;
    pref[r]--;
  }
  debug(pref);
  for (int i = 1; i <= n ; ++i) {
    pref[i]+=pref[i-1];
  }
  debug(pref);
  int c=0,ans=0;
  for (int i = 0; i < n  ; ++i) {
    if(pref[i]==0){
      c++;
    }else {
      ans=max(c,ans);
      c=0;
    }
  }   
  ans=max(c,ans);

  cout<<ans<<'\n';
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
