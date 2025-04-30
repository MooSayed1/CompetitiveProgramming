// ﷽
// Contest: Codeforces Round 1004 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/2067/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 22 Apr 2025 03:03:03 PM EET
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
  int n;
  cin >> n;
  vector<int> v(n);
  map<int,int>mp;
  for (int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]]++;
  }
  for(auto&[a,b]:mp){
    if(b==1){cout << "NO\n";return;}
    if(b>2)
      mp[a+1]+=b-2;
    b=2;
  }
  cout << "YES\n";
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
