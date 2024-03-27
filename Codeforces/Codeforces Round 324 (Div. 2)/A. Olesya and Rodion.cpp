// ﷽
// Contest: Codeforces Round 324 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/584/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 21 Feb 2024 08:32:10 PM EET
//
#include <bits/stdc++.h>
#include <string>
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
  int n, t;
  cin >> n >> t;
  if (t == 10 && n == 1) {
    cout << -1;
    return;
  }
  string s;
  s += to_string(t);
  for (int i = 0; i < n - 1; ++i)
    s.push_back('0');
  if (t == 10)
    s.pop_back();
  cout << s << endl;
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
