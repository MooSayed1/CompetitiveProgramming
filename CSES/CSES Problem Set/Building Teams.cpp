// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1668
// Memory Limit: 512
// Time Limit: 1000
// Start: Fri 22 Mar 2024 02:21:51 AM EET
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
vector<vector<int>> adj;
vector<int> color;

bool dfs(int node, int c) {
  color[node] = c;

  for (int u : adj[node]) {
    if (color[u] == -1) {
      if (!dfs(u, 1 - c))
        return false;
    } else if (color[u] == c) {
      return false;
    }
  }

  return true;
}

bool isBipartite(int n) {
  color.assign(n + 1, -1);

  for (int i = 0; i < n; ++i) {
    if (color[i] == -1) {
      if (!dfs(i, 0))
        return false;
    }
  }

  return true;
}

int main() {
  int n, m;
  cin >> n >> m; // Number of vertices and edges
  adj.resize(n + 1);
  // Input edges
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u); // For undirected graph
  }

  if (isBipartite(n)) {
    for (int i = 1; i <= n; ++i) {
      if (color[i] == 0)
        cout << 1 << " ";
      else if (color[i] == 1)
        cout << 2 << " ";
    }
  } else {
    cout << "IMPOSSIBLE" << endl;
  }

  return 0;
}
