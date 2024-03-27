// ﷽
// Contest: Educational Codeforces Round 163 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1948/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 17 Mar 2024 09:43:42 PM EET
//
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
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
  int a[n];
  vi arr;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    arr.push_back(a[i]);
  }

  for (int i = 0; i < arr.size(); ++i) {
    if (is_sorted(all(arr))) {
      yes;
      return;
    }
    string temp = to_string(arr[i]);

    if (temp.size() > 1) {
      arr.erase(arr.begin() + i);
      for (int j = temp.size() - 1; j >= 0; --j) {
        arr.insert(arr.begin() + i, temp[j] - '0');
        
        debug(arr);
      }
    }
  }

  no;
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
