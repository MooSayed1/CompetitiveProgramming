// ﷽
// Contest: Codeforces Round 267 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/467/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 06 Feb 2024 03:51:59 AM EET
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
  int n, m, k, cnt = 0;
  cin >> n >> m >> k;
  int arr[m + 1];
  for (auto &it : arr)
    cin >> it;
  int temp = 0;
  for (int i = 0; i < m; ++i) {
    temp = arr[m] ^ arr[i];
    if (__builtin_popcount(temp) <= k)
      cnt++;
    temp = 0;
  }
  cout<<cnt<<endl;
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
