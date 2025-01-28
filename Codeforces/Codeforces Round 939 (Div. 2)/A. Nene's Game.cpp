// ﷽
// Contest: Codeforces Round 939 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1956/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 13 Apr 2024 04:42:30 PM EET
//
#include <algorithm>
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
  int k, q;
  cin >> k >> q;
  vi arr(k);
  vi arr2(q);
  cin >> arr >> arr2;
  int minn = *min_element(all(arr));
  for (int i = 0; i < q; ++i) {
    if (minn > arr2[i]) {
      cout << arr2[i] << " ";
    } else {
      cout << minn - 1 << " ";
    }
  }
  cout << endl;
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
