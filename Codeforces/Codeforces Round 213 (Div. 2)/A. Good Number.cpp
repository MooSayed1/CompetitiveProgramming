// ﷽
// Contest: Codeforces Round 213 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/365/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 06 Feb 2024 01:21:31 PM EET
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
  int n, k, cnt = 0;
  cin >> n >> k;
  bitset<10> b;
  int x = 0;
  for (int i = 0; i < k + 1; ++i)
    x = (x << 1) | 1;

  while (n--) {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
      b[s[i] - '0'] = 1;
    if (x == b.to_ullong())
      cnt++;
  }
  cout << cnt << endl;
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
