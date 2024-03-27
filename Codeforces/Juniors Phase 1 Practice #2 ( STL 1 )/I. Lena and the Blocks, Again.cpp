// ﷽
// Contest: Juniors Phase 1 Practice #2 ( STL 1 )
// Judge: Codeforces
// URL: https://codeforces.com/group/3nQaj5GMG5/contest/373244/problem/I
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 03 Mar 2024 04:56:22 PM EET
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
  vector<int> arr(n);
  int Max = 0;
  int Min = 1e9;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    if (arr[i] > Max)
      Max = arr[i];
    if (arr[i] <= Min)
      Min = arr[i];
  }
  int a = -1, b = -1;
  int minidis = INT_MAX;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == Max)
      a = i;
    if (arr[i] == Min)
      b = i;
    if (a != -1 && b != -1)
      minidis = min(minidis, abs(a - b));

    cout << a << " " << b << endl;
  }

  cout << minidis;
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
