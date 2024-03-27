// ﷽
// Contest: Codeforces Round 929 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1933/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 27 Feb 2024 09:40:15 PM EET
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
  int n;
  cin >> n;
  vi arr(n), f(3);
  ll sum = 0;
  for (auto &it : arr) {
    cin >> it;
    it %= 3;
    f[it]++;
    sum += it;
    sum %= 3;
  }
  if (!sum) {
    cout << 0 << "\n";
  } else if (f[sum] || sum == 2) {
    cout << 1 << endl;
  } else
    cout << 2 << endl;
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
