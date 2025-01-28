// ﷽
// Contest: Codeforces Round 927 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1932/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 18 Feb 2024 03:29:55 PM EET
//
#include <bits/stdc++.h>
#include <bitset>
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
long long getProduct(const deque<int> &nums, int m) {
  long long product = 1;
  for (int num : nums) {
    product = (product * num) % m;
  }
  return product;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  string s;
  cin >> s;
  int l = count(s.begin(), s.end(), 'L');
  int r = l;
  vector<int> ans(n);
  int num = 1;
  for (int i = n - 1; i >= 0; i--) { // LRRL  3 1 4 2
    if (s[i] == 'L') {
      num = num * a[--l] % m;
    } else {
      num = num * a[r++] % m;
    }
    debug(ans);
    ans[i] = num;
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " \n"[i == n - 1];
  }
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
