// ﷽
// Contest: Codeforces Round 950 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1980/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 03 Jun 2024 08:29:26 PM EEST
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
#define pii pair<int, int>
#define OO 2e9
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
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  map<char, int> mp = {
      {'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', 0}, {'F', 0}, {'G', 0},
  };
  for (auto &it : s) mp[it]++;
  ll sum = 0;

  for (auto &it : mp) {
    sum += max((m - it.second), 0);
  }
  cout << sum << endl;
}
int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
