// ﷽
// Contest: Divide by Zero 2017 and Codeforces Round 399 (Div. 1 + Div. 2,
// combined) Judge: Codeforces URL: https://codeforces.com/contest/768/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 10 Feb 2024 02:06:26 AM EET
//
#include <algorithm>
#include <bits/stdc++.h>
#include <queue>
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
  vi arr(n);
  cin >> arr;
  sort(all(arr));
  int mmax = arr[arr.size() - 1], mmin = arr[0];
  auto r = equal_range(all(arr), mmin);
  int cntMin = r.second - r.first;
  r = equal_range(all(arr), mmax);
  int cntMax = r.second - r.first;
  int len = arr.size();
  len - (cntMin + cntMax) ? cout << len - (cntMax + cntMax) : cout << 0;
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
