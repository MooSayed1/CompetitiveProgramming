// ﷽
// Contest: Helvetic Coding Contest 2017 online mirror (teams allowed, unrated)
// Judge: Codeforces
// URL: https://codeforces.com/contest/802/problem/J
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 27 Aug 2024 07:15:49 PM EEST
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
vector<vector<pair<int,int>>>adj;
int dfs(int node,int parent = -1){
  if(adj[node].size()==1&&node!=0)return 0;
  int ans=0;
  for(auto&it:adj[node]){
    if(it.first==parent)continue;
    ans = max(ans,dfs(it.first,node)+it.second);
  }
  return ans;
}
void solve() {
  int n;
  cin >> n;
  adj.assign(n,vector<pair<int,int>>());
  for(int i=0;i<n-1;++i){
    int a,b,c;
    cin >> a >> b >>c;
    adj[a].pb({b,c});
    adj[b].pb({a,c});
  }
  cout << dfs(0);
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
