// ﷽
// Contest: Codeforces Round 950 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1980/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 03 Jun 2024 05:37:32 PM EEST
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
  int n, f, k;
  cin >> n >> f >> k;
  vi arr(n);
  cin >> arr;
  int fav = arr[f - 1];
  sort(all(arr), greater<int>());
  map<int, int> mp;
  for (auto &it : arr) {
    if (it == fav) mp[it]++;
  }
  int fir = mp[fav];
  debug(fir);

  for (int i = 0; i < k; ++i) {
    if (arr[i] == fav) mp[arr[i]]--;
  }

  debug(mp[fav]);
  if (mp[fav] == 0) {
    yes;
  } else if (mp[fav] == fir)
    no;
  else {
    cout << "MAYBE" << endl;
  }
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
