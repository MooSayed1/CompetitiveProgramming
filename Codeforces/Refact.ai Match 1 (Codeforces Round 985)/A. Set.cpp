#include <bits/stdc++.h>
using namespace std;
#ifdef CODEFORCES
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fast                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"

void solve() {
  int l,r,k;
  cin >> l >> r >>k;
  int tmp=r/k-l+1;
  if(tmp<0){cout<<0<<endl;return;}
  else cout<<tmp<<endl;
}
int32_t main() {

  fast;
  int t = 1;
  cin>>t;
  while (t--)
    solve();
  return 0;
}