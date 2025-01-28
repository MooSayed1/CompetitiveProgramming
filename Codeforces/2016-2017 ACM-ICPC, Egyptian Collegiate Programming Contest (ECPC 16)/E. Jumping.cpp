// ﷽
// Contest: 2016-2017 ACM-ICPC, Egyptian Collegiate Programming Contest (ECPC
// 16) Judge: Codeforces URL: https://codeforces.com/gym/101147/problem/E Memory
// Limit: 512 Time Limit: 10000 Start: Thu 25 Apr 2024 03:36:07 PM EET
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
#define OO 1e8
vector<vi> adj, emptyAdj;

vi bfs(int src, vector<vi> &adj) {
  queue<int> q;
  vi distance(adj.size(), OO);
  distance[src] = 0;
  q.push(src);
  while (!q.empty()) {
    int cur = q.front();
    q.pop();
    for (auto &it : adj[cur]) {
      if (distance[it] == OO) {
        distance[it] = distance[cur] + 1;
        q.push(it);
      }
    }
  }
  return distance;
}
void solve() {
  int n;
  cin >> n;

  adj.resize(n);
  emptyAdj.resize(n);
  for (int i = 0; i < n; ++i) {
    int d;
    cin >> d;
    int nxt = i + d;
    int pre = i - d;
    if (nxt < n) {
      adj[nxt].pb(i);
    }
    if (pre >= 0)
      adj[pre].pb(i);
  }
  vi res = bfs(n - 1, adj);
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (res[i] != OO)
      cout << res[i] << endl;
    else
      cout << -1 << endl;
  }
  debug(res);
}
int32_t main() {

  freopen("jumping.in", "r", stdin);
  // freopen("output.txt", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
    adj = emptyAdj;
  }
  return 0;
}
