// ﷽
// Contest: Codeforces Round 186 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/313/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 12 Feb 2024 07:01:34 PM EET
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

  string s;
  cin >> s;

  int q;
  cin >> q;

  vi pref(s.size(), 0);
  for (int i = 1; i < s.size(); i++) {
    pref[i] = pref[i - 1] + (s[i] == s[i - 1]);
  }

  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << pref[r - 1] - pref[l - 1] << endl;
  }
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
