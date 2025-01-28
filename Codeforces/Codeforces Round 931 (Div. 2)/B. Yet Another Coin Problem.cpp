// ﷽
// Contest: Codeforces Round 931 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1934/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 19 Jun 2024 12:37:12 PM EEST
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

vpi arr;
vector<vector<ll>> dp;
 
ll minNum(int n, int W) {
    if (n < 0 || W <= 0) {
        return 0;
    }
    ll &ret=dp[n][W];
    if (~ret) return ret;
    ll ww = arr[n].first;
    ll price = arr[n].second;
    ll op1 = 0;
    if (ww <= W)
        op1 = price + maxiPrice(n - 1, W - ww);
    ll op2 = maxiPrice(n - 1, W);
 
    return ret = max(op1, op2);
}
 
void solve() {
    int n;
    cin >> n;
    
    arr.resize(n);
    dp.assign(n, vector<ll>(W + 1, -1)); 
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
