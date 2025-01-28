// ﷽
// Contest: Codeforces Round 947 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1975/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 26 May 2024 12:44:56 AM EEST
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
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
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

template <typename T>
istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data) input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {
  for (const T &x : data) output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
  int n;
  cin >> n;
  vi a(n);
  cin >> a;

  if (n == 2) {
    cout << min(a[0], a[1]) << endl;
    return;
  }
  int ans = 0;
  int mid = 0;
  for (int i = 0; i < n - 2; ++i) {
    vi temp;
    temp.push_back(a[i]);
    temp.push_back(a[i + 1]);
    temp.push_back(a[i + 2]);
    sort(all(temp));
    mid = temp[1];
    ans = max(ans, mid);
    temp.clear();
  }

  cout << ans << endl;
}
int32_t main() {
  // freopen("input.in", "r", stdin);
  // freopen("output.out", "w", stdout);

  fastio();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
