// ﷽
// Contest: START131D
// Judge: CodeChef
// URL: https://www.codechef.com/START131D/problems/KCLOSE
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 24 Apr 2024 05:16:38 PM EET
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
  int n, k;
  cin >> n >> k;
  set<int> arr;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    arr.insert(x % k);
  }
  ll minn = *arr.rbegin() - *arr.begin();
  debug(arr);
  vi del;
  for (auto it = arr.begin(); it != arr.end(); ++it) {
    if (k - *it >= *it) {
      int value = *it;
      debug(value);
      del.push_back(*it);
      arr.insert(value + k);
    }
  }
  for (auto &it : del)
    arr.erase(it);
  debug(arr);
  cout << min(1LL * (*arr.rbegin() - *arr.begin()), 1LL * minn) << endl;
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
