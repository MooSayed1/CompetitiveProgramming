// ﷽
// Contest: Codeforces Round 321 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/580/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 25 Apr 2024 09:40:06 PM EET
//
#include <bits/stdc++.h>
#include <vector>
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
#define OO 1e8
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
vector<vi> adj;
vi visited;
queue<int> q;
int n, m;
vi bfs(int src, vector<vi> &adj) {
  vi distance(adj.size(), OO);
  distance[src] = visited[src];
  q.push(src);
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    // process node s
    debug(visited);
    for (auto u : adj[cur]) {
      if (distance[u] == OO) {
        if (distance[cur] >= 1 && visited[u] == 1) {
          distance[u] = distance[cur] + visited[u];
          if (distance[u] > m)
            continue;
        } else
          distance[u] = visited[u];
        q.push(u);
      }
    }
  }
  return distance;
}

void solve() {
  cin >> n >> m;
  adj.resize(n);
  visited.resize(n);
  cin >> visited;
  int a, b;
  while (cin >> a >> b) {
    --a, --b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  vi res = bfs(0, adj);
  int cnt = 0;
  for (int i = 1; i <= n; ++i) {
    if (res[i] <= m && adj[i].size() == 1)
      ++cnt;
  }
  cout << cnt << endl;
  debug(res);
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
