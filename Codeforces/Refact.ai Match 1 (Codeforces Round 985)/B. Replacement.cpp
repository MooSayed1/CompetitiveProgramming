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
  int n;cin >> n;
  string s,ss;cin>>s>>ss;
  int cnt0=0,cnt1=0,mulcnt=0;
  for(auto&it:s){
    if(it=='0')
      cnt0++;
    else cnt1++;
  }
  for(int i=0;i<ss.size();++i){
    if(!cnt0||!cnt1){cout<<"NO"<<endl;return;}
    if(ss[i]=='1')cnt0--;
    else cnt1--;
  }

  cout<<"YES"<<endl;
}
int32_t main() {

  fast;
  int t = 1;
  cin>>t;
  while (t--)
    solve();
  return 0;
}
