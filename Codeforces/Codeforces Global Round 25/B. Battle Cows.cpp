// ﷽
// Contest: Codeforces Global Round 25
// Judge: Codeforces
// URL: https://codeforces.com/contest/1951/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 06 Apr 2024 05:32:31 PM EET
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
  k--;
  vector<int> arr(n);
  int ind = -1;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < k; i++) {
    if (arr[k] < arr[i]) {
      ind = i;
      break;
    }
  }
  if (ind == -1) {
    ind = 0;
  }
  int ans1 = 0, ans2 = 0;

  if (ind >= 1) {
    ans1++;
  }
  swap(arr[k], arr[ind]);
  for (int i = ind + 1; i < n; i++) {
    if (arr[i] < arr[ind]) {
      ans1++;
    } else {
      break;
    }
  }
  swap(arr[k], arr[ind]);

  swap(arr[k], arr[0]);

  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[0]) {
      ans2++;
    } else {
      break;
    }
  }

  cout << max(ans1, ans2) << '\n';
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
