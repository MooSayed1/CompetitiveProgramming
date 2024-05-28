// ﷽
// Contest: Codeforces Round 948 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1977/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 26 May 2024 05:40:19 PM EEST
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
#define OO 1e8
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
  ll x;
  cin >> x; 
  vi res;

  while (x != 0) {
    if (x&1^1) {
      res.push_back(0);
      x /= 2;
    } else {
      if (x % 4 == 1 || x == 1) {  // يارب
        res.push_back(1);
        x = (x - 1) / 2;
      } else {
        res.push_back(-1);
        x = (x + 1) / 2;
      }
    }
  }

  cout << res.size() << endl;
  for (int i = 0; i < res.size(); ++i) {
    cout << res[i] << " ";
  }
  cout << endl;
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
