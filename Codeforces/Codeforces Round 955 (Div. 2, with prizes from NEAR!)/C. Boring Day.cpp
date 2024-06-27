// ﷽
// Contest: Codeforces Round 955 (Div. 2, with prizes from NEAR!)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1982/problem/B
// Memory Limit: 256
// Time Limit: 1000
// j: Tue 25 Jun 2024 05:45:10 PM EEST
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

void solve() {
  int n;
  ll l, r;
  cin >> n >> l >> r;
  vi arr(n);
  cin >> arr;

  ll sum = 0;
  int cnt = 0;
  int j = 0;

  for (int i = 0; i < n; ++i) {
    sum += arr[i];

    while (sum > r && j <= i) {
      sum -= arr[j];
      j++;
    }

    if (sum >= l && sum <= r) {
      cnt++;
      sum = 0;
      j = i + 1;
    }
  }

  cout << cnt << endl;
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
