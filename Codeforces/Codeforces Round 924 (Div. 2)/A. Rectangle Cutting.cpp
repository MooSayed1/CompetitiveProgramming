// ﷽
// Contest: Codeforces Round 924 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1928/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 11 Feb 2024 02:52:48 PM EET
//
#include <bits/stdc++.h>
using namespace std;
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
  int a, b;
  cin >> a >> b;
  if (a & 1 ^ 1 && (a >> 1) != b) {
    yes;
    return;
  }
  if (b & 1 ^ 1 && (b >> 1) != a) {
    yes;
    return;
  }
  no;
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
