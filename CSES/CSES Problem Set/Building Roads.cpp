// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1666
// Memory Limit: 512
// Time Limit: 1000
// Start: Mon 15 Jul 2024 01:13:15 AM EEST
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

vector<vi>adj;
vector<bool>vis;
void dfs(int node){
  if(vis[node])return;
  vis[node]=1;
  for(auto&it:adj[node]){
    dfs(it);
  }
}

void solve() {
  int n,m;cin>>n>>m;
  adj.resize(n);
  vis.assign(n,0);
  while(m--)
  {
    int a,b;cin>>a>>b;a--,b--;
    debug(a,b);
    adj[a].pb(b);
    adj[b].pb(a);
  }
  int cnt=0;
  vector<pair<int,int>>res;
  for(int i=0;i<n;++i){
    if(!vis[i])
    {
      dfs(i);
      if(cnt>0){
        res.push_back({i,i+1});
      }
      cnt++;
    }
  }
  cout << cnt - 1<< endl;
  for(auto [a,b]:res){
    cout << a << ' ' << b <<endl;
  }
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
