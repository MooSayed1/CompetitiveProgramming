// ﷽
// Contest: START133D
// Judge: CodeChef
// URL: https://www.codechef.com/START133D/problems/POWPM
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 08 May 2024 07:01:43 PM EEST
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
  int n;
  cin >> n;
  vector<long long> arr(n + 1);
  for (int i = 1; i <= n; ++i)
    cin >> arr[i];
  ll cnt = 0;
  ll maxx = *max_element(all(arr));

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (pow(arr[i], j) > maxx) {
        break;
      }
      if (arr[i] == 1) {
        cnt += n;
        break;
      }
      if (pow(arr[i], j) <= arr[j]) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
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
