// ﷽
// Contest: The 2023 ICPC Egyptian Collegiate Programming Contest (Qualifications Day 6)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/532378/problem/G
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 03 Jul 2024 12:28:32 PM EEST
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
vector<vector<int>> adj;
vector<bool> visited;
vector<int> arr, start, finish;
int timer;

void dfs(int node, int parent) {
  start[node] = timer++;
  for (int neighbor : adj[node]) {
    if (neighbor != parent) {
      dfs(neighbor, node);
    }
  }
  finish[node] = timer++;
}

void solve() {
  int n;
  cin >> n;
  arr.resize(n);
  cin >> arr;
  adj.assign(n, vector<int>());
  visited.assign(n, false);
  start.assign(n, 0);
  finish.assign(n, 0);
  timer = 0;

  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    adj[a].pb(b);
    adj[b].pb(a);
  }

  dfs(1, -1); 

  map<int, vector<int>> group;
  for (int i = 0; i < n; ++i) {
    group[arr[i]].pb(i);
  }

  int ans = 0;
  for (auto &[value, nodes] : group) {
    sort(all(nodes), [](int u, int v) {
      return start[u] < start[v];
    });

    int count = 1;
    int end = finish[nodes[0]];
    for (int j = 1; j < nodes.size(); ++j) {
      if (start[nodes[j]] > end) {
        count++;
        end = finish[nodes[j]];
      } else {
        end = max(end, finish[nodes[j]]);
      }
    }
    ans += count;
  }

  cout << ans << endl;
}

int32_t main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
