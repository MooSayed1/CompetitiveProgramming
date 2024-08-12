// ﷽
// Contest: USACO 2015 December Contest, Silver
// Judge: USACO
// URL: https://usaco.org/index.php?page=viewproblem2&cpid=572
// Memory Limit: 256
// Time Limit: 4000
// Start: Sat 06 Jul 2024 10:32:31 PM EEST
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

void solve() {
  int n,q;cin>>n>>q;
  vi arr(n);cin>>arr;
  vi prefa(n+1),prefb(n+1),prefc(n+1);
  for(int i=0;i<n;++i){
    prefa[i+1]=prefa[i]+(arr[i]==1);
    prefb[i+1]=prefb[i]+(arr[i]==2);
    prefc[i+1]=prefc[i]+(arr[i]==3);
  }
  debug(prefa);
  debug(prefb);
  debug(prefc);
  while(q--){
    int l,r;cin>>l>>r;
    cout << prefa[r]-prefa[l-1] << ' ' << prefb[r]-prefb[l-1] << ' ' << prefc[r]-prefc[l-1] << endl;
  }
}
int32_t main() {

  freopen("bcount.in", "r", stdin);
  freopen("bcount.out", "w", stdout);
  fastio();
  int t = 1;
  // cin>>t;
  while (t--)
    solve();
  return 0;
}
