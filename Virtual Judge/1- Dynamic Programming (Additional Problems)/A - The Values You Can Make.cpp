// ﷽
// Contest: 1- Dynamic Programming (Additional Problems)
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/694791#problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 01 Mar 2025 05:47:33 AM EET
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

const int N = 501, K = 501;
int n, k;
int a[N];
bool dp[N][K][K], vis[N][K][K];

bool go(int i, int sum, int sub_sum) {
  if (i == n)
    return sum == 0 && sub_sum == 0;
  if (vis[i][sum][sub_sum])
    return dp[i][sum][sub_sum];
  vis[i][sum][sub_sum] = 1;
  bool ans = go(i + 1, sum, sub_sum); // leave subset
  if (sum >= a[i]) {
    if (sum - a[i] >= sub_sum) { // take subset, leave sub-subset
      ans |= go(i + 1, sum - a[i], sub_sum);
    }
    if (sub_sum >= a[i]) { // take subset, take sub-subset
      ans |= go(i + 1, sum - a[i], sub_sum - a[i]);
    }
  }
  return dp[i][sum][sub_sum] = ans; 
}

void solve() {
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  memset(dp, -1, sizeof dp);
  vector<int> sums;
  for (int i = n - 1; i >= 0; --i) {
    for (int j = 0; j <= k; ++j) {
      for (int l = 0; l <= j; ++l) {
        go(i, j, l);
      }
    }
  }

  // go(0, 0,0);
  for (int i = 0; i <= k; ++i) {
    if (go(0, k, i))
      sums.push_back(i);
  }

  cout << sums.size() << endl;
  for (int &sum : sums)
    cout << sum << " ";
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
