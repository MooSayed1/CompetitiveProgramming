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
int n;
vector<vi> nodes;
vi visited;
// int cnt = 0;
bool dfs(int node, int &cnt) {
  visited[node] = true;
  for (auto &it : nodes[node]) {
    if (it == n)
      return true;
    ++cnt;
    if (!visited[it]) {
      debug(cnt);
      return dfs(it, cnt);
    }
  }
  return false;
}
bool find(int node, int &cnt) {
  for (auto &it : nodes[node]) {
    if (it == n - 1)
      return true;
    ++cnt;
  }
  return false;
}
void solve() {
  cin >> n;
  nodes.resize(n);
  visited.resize(n);
  int cnt = 0;
  vi arr(n);
  cin >> arr;
  for (int i = 0; i + arr[i] <= n - 1; ++i) {
    nodes[i].push_back(i + arr[i]);
    nodes[i + arr[i]].push_back(i);
  }
  for (int i = 0; i < n; ++i) {
    cnt = 0;
    if (find(i, cnt)) {
      cout << cnt << endl;
    } else
      cout << -1 << endl;
  }
}
int32_t main() {

  // freopen("jumping.in", "r", stdin);
  // freopen("output.txt", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
