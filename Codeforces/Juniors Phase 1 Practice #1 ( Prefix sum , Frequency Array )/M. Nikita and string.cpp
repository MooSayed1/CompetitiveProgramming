// ﷽
// Contest: Juniors Phase 1 Practice #1 ( Prefix sum , Frequency Array )
// Judge: Codeforces
// URL: https://codeforces.com/group/3nQaj5GMG5/contest/372026/problem/M%D9%87%D9%8A%D9%86%D8%AA
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 25 Oct 2024 05:47:38 AM EEST
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

void solve() {
  string s;cin>>s;
  int n=s.size();
  vi pa(n+1);
  vi pb(n+1);
  for(int i=0;i<n;++i){
    pa[i+1]+=(s[i]=='a')+pa[i];
    pb[i+1]+=(s[i]=='b')+pb[i];
  }
  int ans=0;
  for(int i=0;i<=n;++i){
    for(int j=i;j<=n;++j){
      int firCut=pa[i];
      int secCut=pb[j]-pb[i];
      int thirdCut=pa[n]-pa[j];
      ans=max(firCut+secCut+thirdCut,ans);
    }
  }
  cout<<ans<<endl;
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
