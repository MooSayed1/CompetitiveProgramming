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
  int n,k;cin>>n>>k;
  vi arr(n);
  int sumNegative=0,sumPositive=0;
  int negativeCnt = 0;
  int minAbs = INT_MAX;
  for(auto&it:arr){
    cin>>it;
    if(it>0)sumPositive+=it;
    else sumNegative += it,negativeCnt++;
    minAbs=min(minAbs,abs(it));
  }
  sort(all(arr));
  debug(arr);
  int totalSum = 0;
  if(k<=negativeCnt){
    for(int i=0;i<k;++i){
      arr[i]*=-1;
      sumPositive += arr[i];
      sumNegative += arr[i];
    }
  }
  if(k>negativeCnt){
    for(int i=0;i<negativeCnt;++i){
      arr[i]*=-1;
      sumPositive += arr[i];
      sumNegative += arr[i];
    }
    if((k-negativeCnt)&1){
      sumPositive -= minAbs;
      sumNegative -= minAbs;
    }
  }
  cout << sumPositive + sumNegative << endl;
}
int32_t main() {

  fast;
  int t = 1;
  // cin>>t;
  while (t--)
    solve();
  return 0;
}
