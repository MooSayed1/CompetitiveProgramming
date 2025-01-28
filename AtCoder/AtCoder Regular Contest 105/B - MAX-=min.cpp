// ﷽
// Contest: AtCoder Regular Contest 105
// Judge: AtCoder
// URL: https://atcoder.jp/contests/arc105/tasks/arc105_b
// Memory Limit: 1024
// Time Limit: 2000
// Start: Mon 12 Feb 2024 01:35:01 AM EET
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
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  cin >> arr;
  int result = arr[0];
  for (int i = 1; i < n; ++i) {
    result = gcd(result, arr[i]);
  }
  cout << result << endl;
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
