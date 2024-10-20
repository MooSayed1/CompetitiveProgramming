// ﷽
// Contest: Codeforces Round 977 (Div. 2, based on COMPFEST 16 - Final Round)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2021/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 07 Oct 2024 02:19:26 AM EEST
//
#include <bits/stdc++.h>
#include <queue>
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
  int n;cin>>n;
  ordered_set st;
  for(int i=0;i<n;++i){
    int x;cin>>x;
    st.insert(x);
  }
  debug(st);
  while(st.size()!=1){
    int tm=*st.find_by_order(1)+*st.find_by_order(2);
    st.erase(st.find_by_order(1));
    st.erase(st.find_by_order(1));
    st.insert(tm/2);
  }
  cout<<*st.find_by_order(1)<<endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin>>t;
  while (t--)
    solve();
  return 0;
}