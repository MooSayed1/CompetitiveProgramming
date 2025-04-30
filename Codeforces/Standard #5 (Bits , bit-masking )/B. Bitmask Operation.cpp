// ﷽
// Contest: Standard #5 (Bits , bit-masking )
// Judge: Codeforces
// URL: https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 15 Mar 2025 10:46:41 PM EET
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

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;

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

bool getBit(int x,int inx){
  return (1<<inx)&x;
}


int setBit(int x,int inx){
  return (1<<inx)|x;
}

int resetBit(int x,int inx){
  return x&(~(1<<inx));
}

int flibBit(int x,int inx){
  return x^(1<<inx);
}
void solve() {

  int q,n;cin>>q>>n;
  while(q--){
    int op,x;cin>>op>>x;
    if(op==1){
      cout << getBit(n,x) << endl;;
    }else if(op==2){
      n=setBit(n,x);
      cout << n << endl;
    }else if(op==3){
      n=resetBit(n,x);
      cout << n << endl;
    }else{
      n=flibBit(n,x);
      cout << n << endl;
    }


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
