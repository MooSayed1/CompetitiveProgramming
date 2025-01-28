// ﷽
// Contest: Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1970/C1
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 06 Jun 2024 12:48:23 AM EEST
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
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int, int>
#define OO 2e9
#define endl "\n"

template <typename T>
istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data) input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {
  for (const T &x : data) output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

vector<vi> adj;
vi leafs;

int n, r;
vi bfs(int src) {
  vi distance(n + 1, OO);
  int curr = 0;
  queue<int> q;
  q.push(src);
  distance[src] = 0;
  while (!q.empty()) {
    curr = q.front(), q.pop();
    for (auto &it : adj[curr]) {
      if (distance[it] == OO) {
        distance[it] = distance[curr] + 1;
        q.push(it);
      }
    }
  }

  return distance;
}
void solve() {
  cin >> n >> r;
  adj.resize(n + 1);
  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    cin >> a >> b;
    adj[a].emplace_back(b);
    adj[b].emplace_back(a);
  }
  int node;
  cin >> node;

  for (int i = 1; i <= n; i++) {
    if (adj[i].size() == 1) {
      leafs.emplace_back(i);
    }
  }
  vi dist;
  debug(leafs);
  dist = bfs(node);
  vi distLeafs;
  for (auto &it : leafs) {
    distLeafs.emplace_back(dist[it]);
  }
  sort(all(distLeafs));

  debug(dist);
  debug(distLeafs);
  for (auto &it : distLeafs) {
    if (it & 1) {
      cout << "Ron";
      break;
    } else {
      cout << "Hermione";
      break;
    }
  }
}
int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  // cin>>t;
  while (t--) solve();
  return 0;
}
