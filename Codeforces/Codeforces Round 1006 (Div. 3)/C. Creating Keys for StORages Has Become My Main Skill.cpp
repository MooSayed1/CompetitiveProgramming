// ﷽
// Contest: Codeforces Round 1006 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2072/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 25 Feb 2025 05:16:52 PM EET
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

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> res;
  bool f = 0;
  // if(n==1){cout << x << "\n";return;}
  for (int i = 0; i < n; ++i) {
    if ((x & i) == i) {
      res.push_back(i);
    }else{
      res.push_back(0);
    }
  }
  int orr=0;
  for(auto&it:res){
    orr|=it;
  }
  if(orr<x){
    res.pop_back();
    res.push_back(x);
  }
  cout << res << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
