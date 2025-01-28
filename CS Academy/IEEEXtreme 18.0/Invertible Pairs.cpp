// ﷽
// Contest: IEEEXtreme 18.0
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/invertible-pairs/
// Memory Limit: 512
// Time Limit: 750
// Start: Sun 27 Oct 2024 01:33:16 AM EEST
//
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
namespace __gnu_pbds {
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

void solve() {
  int n;
  cin >> n;
  vi arr(n+3);
  for(int i=0;i<n;++i)cin>>arr[i];
  int sum=0;
  int ans=abs(arr[0]);
  for (int i = 0; i < n; i += 2) {
    sum = max({sum + arr[i] + arr[i + 1], sum - arr[i] - arr[i + 1], arr[i+1], -arr[i + 1]});
    ans = max({ans, sum+abs(arr[i + 2])}); 
  }
  cout << ans << endl;
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
