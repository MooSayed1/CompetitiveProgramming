// ﷽
// Contest: Codeforces Round 970 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2008/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 01 Sep 2024 06:59:51 PM EEST
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
#define f(i, a, b) for (int i = a; i < b; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int,int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
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
  int n;
  cin >>n;
  string s;
  cin >> s;
  map<char,int>mp,ma;
  for(int i=0;i<n;++i){
    if(i&1){
      ma[s[i]]++;
    }else{
      mp[s[i]]++;
    }
  }
  debug(mp);
  debug(ma);
  int ans=INT_MIN;
  int sum=0;
  for(auto[a,b]:mp){
    ans=max(ans,b);
    sum+=b;
  }
  debug(ans);
  sum-=ans;
  ans=INT_MIN;
  for(auto[a,b]:ma){
    ans=max(ans,b);
    sum+=b;
  }
  debug(ans);
  sum-=ans;
  cout << sum << endl;
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
