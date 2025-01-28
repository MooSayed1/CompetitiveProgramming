// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1668
// Memory Limit: 512
// Time Limit: 1000
// Start: Tue 27 Aug 2024 05:01:32 PM EEST
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
vector<vi>adj;
vector<bool>vis;
vi color;
bool cycle;

void dfs(int node, int col) {
  if(color[node])return;
  color[node] = col;
  for (auto &it : adj[node]) {
    if(col==1)
      dfs(it, 2);
    else
      dfs(it, 1);
    if (color[it] == color[node]) {
      cycle = true;
      return;
    }
  }
}

void solve() {
  int n, m;
  cin >> n >> m;
  adj.assign(n+1, vector<int>());
  color.assign(n+1, 0);
  cycle = false;

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  debug(adj);

  for (int i = 1; i <= n; ++i) {
    if (!color[i]) {
      dfs(i, 1);
      if (cycle) {
        cout << "IMPOSSIBLE\n";
        return;
      }
    }
  }

  for (auto &it : color) {
    if(it)
      cout << it << ' ';
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
