// ﷽
// Contest: Codeforces Beta Round 44 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/47/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 09 Apr 2024 05:19:14 PM EET
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
bool com(pair<char, int> p1, pair<char, int> p2) {
  return p1.second < p2.second;
}

void solve() {
  vector<pair<char, int>> arr(3);

  arr[0].first = 'A';
  arr[1].first = 'B';
  arr[2].first = 'C';
  string s;
  for (int i = 0; i < 3; ++i) {
    cin >> s;
    if (s[1] == '>') {
      arr[s[0] - 'A'].second++;
    } else
      arr[s[2] - 'A'].second++;
  }

  sort(all(arr), com);
  int cnt = count_if(all(arr), [](pair<char, int> p) { return p.second == 1; });
  if (cnt > 1) {
    cout << "Impossible";
    return;
  }
  for (auto &it : arr)
    cout << it.first;
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
