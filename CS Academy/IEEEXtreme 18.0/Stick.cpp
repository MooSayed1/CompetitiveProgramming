// ﷽
// Contest: IEEEXtreme 18.0
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/stick/
// Memory Limit: 256
// Time Limit: 500
// Start: Sat 26 Oct 2024 12:18:53 PM EEST
//
#include <bits/stdc++.h>
#include <algorithm>
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
double area(const vector<pair<int,int>>& fig) {
    double res = 0;
    for (unsigned i = 0; i < fig.size(); i++) {
        pair<int,int> p = i ? fig[i - 1] : fig.back();
        pair<int,int> q = fig[i];
        res += (p.first - q.first) * (p.second + q.second);
    }
    return fabs(res) / 2;
}
void solve() {
  vector<pair<int,int>> fig;
  fig.pb({5,5});
  fig.pb({5,1});
  fig.pb({4,1});
  fig.pb({4,0});
  fig.pb({3,0});
  fig.pb({3,-1});
  fig.pb({2,-1});
  fig.pb({2,-2});
  fig.pb({-2,-2});
  fig.pb({-2,2});
  fig.pb({-1,2});
  fig.pb({-1,3});
  fig.pb({0,3});
  fig.pb({0,4});
  fig.pb({1,4});
  fig.pb({1,5});
  debug(fig);
  debug(area(fig));
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
