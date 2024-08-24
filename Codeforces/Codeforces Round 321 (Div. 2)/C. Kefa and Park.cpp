// ﷽
// Contest: Codeforces Round 321 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/580/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 20 Aug 2024 12:27:08 AM EEST
//
#include<bits/stdc++.h>

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
vector<vi>adj;
vector<bool>vis;
vi cats;
int n,m;
int ans;
void dfs(int node,int parent,int cnt){
  if(parent!=-1) {
    if (cats[node] && cats[parent]) {
      cnt++;
    } else cnt = 0;
  }
  if(cnt+1>m)return;
  if(adj[node].size()==1&&node)ans++;
  for(auto&it:adj[node]){
    if(it!=parent)
      dfs(it,node,cnt);
  }
}
void solve() {
  cin >> n >> m;
  adj.assign(n, vector<int>());
  cats.assign(n,0);

  for(int i=0;i<n;++i){
    cin>>cats[i];
  }
  for(int i=0;i<n-1;++i){
    int a,b;
    cin>>a>>b;
    a--,b--;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  dfs(0,-1,0);
  cout << ans << endl;
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
