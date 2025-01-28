// ﷽
// Contest: START132D
// Judge: CodeChef
// URL: https://www.codechef.com/START132D/problems/GAME_XI
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 01 May 2024 05:42:18 PM EEST
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
  int n, m;
  cin >> n >> m;
  vi a(n);
  vi b(m);
  cin >> a >> b;
  if (n < 4 || m < 4 || n + m < 11) {
    cout << -1 << endl;
    return;
  }

  sort(all(a));
  sort(all(b));
  ll sum = 0;
  for (int i = n - 1, j = m - 1; i >= n - 4, j >= m - 4; --i, --j) {
    sum += a[i];
    sum += b[j];
    a.pop_back();
    b.pop_back();
  }
  vi arr;
  int cnt = 3;
  for (int i = a.size() - 1; i >= 0 && cnt; --i, --cnt) {
    arr.push_back(a[i]);
  }
  cnt = 3;
  for (int i = b.size() - 1; i >= 0 && cnt; --i, --cnt) {
    arr.push_back(b[i]);
  }
  sort(all(arr));

  cnt = 3;
  for (int i = arr.size() - 1; i >= 0 && cnt; --i, --cnt) {
    sum += arr[i];
  }
  cout << sum << endl;
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
