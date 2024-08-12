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
vi vis;
int n,m;
int dfs(int cur, int fa, int sum) {
	if (sum <= m && adj[cur].size() == 1) return 1;
	if (sum > m) return 0;
	int ans = 0;
	if (!vis[cur]) sum = 0; 
	for (auto it : adj[cur]) if (it != fa) {
		ans += dfs(it, cur, sum + vis[it]);
	}
	return ans;
}

void solve() {
  cin >> n >> m;
  adj.resize(n+1);
  vis.resize(n+1);
	for (int i = 1; i <= n; i++)
		cin >> vis[i];
	for (int i = 1, u, v; i < n; i++) {
		cin >> u >> v;
		adj[u].emplace_back(v);
		adj[v].emplace_back(u);
	}
	adj[1].emplace_back(0);
	cout << dfs(1, 0, vis[1]);
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
