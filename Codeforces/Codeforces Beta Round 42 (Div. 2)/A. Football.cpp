// ﷽
// Contest: Codeforces Beta Round 42 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/43/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 21 Feb 2024 09:12:49 PM EET
//
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
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
  string s, ss;
  vector<string> arr(n);
  for (auto &it : arr)
    cin >> it;
  s = arr[0];
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == s)
      cnt++;
    else
      ss = arr[i];
  }
  (cnt > (n - cnt) ? cout << s : cout << ss);
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
