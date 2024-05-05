// ﷽
// Contest: AtCoder Beginner Contest 351
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc351/tasks/abc351_c
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat 27 Apr 2024 03:32:45 PM EEST
//
#include <bits/stdc++.h>
#include <iterator>
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
  cin >> n;
  vi arr;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    arr.emplace_back(x);
    while (true) {
      if (arr.size() <= 1)
        break;
      int len = arr.size() - 1;
      if (arr[len - 1] == arr[len]) {
        arr[len - 1]++;
        arr.pop_back();
        continue;
      } else
        break;
    }
  }
  cout << arr.size();
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
