// ﷽
// Contest: Juniors Phase 1 Practice #2 ( STL 1 )
// Judge: Codeforces
// URL: https://codeforces.com/group/3nQaj5GMG5/contest/373244/problem/J
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 04 Mar 2024 11:09:13 PM EET
//
#include <bits/stdc++.h>
using namespace std;
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

void solve() {
  int m, n;
  cin >> m >> n;
  map<int, int> map;
  for (int i = 0; i < m; ++i) {
    int k, v;
    cin >> k >> v;
    map[k] = v;
  }
  int q;
  cin >> q;
  while (q--) {
    int u, v;
    cin >> u >> v;
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
