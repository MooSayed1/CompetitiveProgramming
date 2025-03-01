// ﷽
// Contest: 2- Digit / Bitmask DP
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/696623#problem/E
// Memory Limit: 64
// Time Limit: 1000
// Start: Sat 01 Mar 2025 04:08:54 AM EET
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
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  cin>>arr;
  vector<bitset<501>> dp(n);
  auto go = [&](auto &&go, int i, int sum, bitset<501> bt) -> void {
    if (i == n)
      return;
    if(sum==k)
    if (~dp[i][sum])
      return;
    go(i + 1, sum, bt);
    if(i+1<n){
      bt[arr[i]]=1;
      go(i+1,sum+arr[i],bt);
    }
  };
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--) {
    cout << "Case " << t + 1 << ": ";
    solve();
  }
  return 0;
}
