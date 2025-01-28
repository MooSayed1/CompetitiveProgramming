// ﷽
// Contest: IEEEXtreme 18.0
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/star-road/
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 26 Oct 2024 05:13:47 AM EEST
//
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
namespace __gnu_pbds{
typedef tree<long long,
null_type,
less<long long>,
rb_tree_tag,
tree_order_statistics_node_update> ordered_set; 
}
using namespace __gnu_pbds;
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
int cnt = 1;
int mx = 1;
int n;
vector<vi> adj;
vi stars;

int dfs(int x, int y) {
  for(int u : adj[x]) {
    if (u != y) {
      if(stars[u]>mx)
        return dfs(u, x)+1;
      else
        return dfs(u, x);
    }
  }
}
 
void solve() {
  cin >> n;
  stars = vector<int>(n+1);
  for(int i = 1 ;i <= n ;i++) {
    cin >> stars[i];
  }
  adj = vector<vector<int>>(n+1);
  for(int i = 0 ; i < n-1; i++) {
    int x, y;
    cin >> x >> y;
    adj[x].pb(y);
    adj[y].pb(x);
  }
  for(int i = 1; i <= n; i++) {
    cnt = 0;
    dfs(i, -1, 1);
  }
  cout << cnt << endl;
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
