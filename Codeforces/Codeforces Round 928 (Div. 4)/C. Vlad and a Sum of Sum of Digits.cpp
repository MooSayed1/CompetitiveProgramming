// ﷽
// Contest: Codeforces Round 928 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1926/problem/C
// Memory Limit: 256
// Time Limit: 500
// Start: Mon 19 Feb 2024 04:52:24 PM EET
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
const int N = 2e5 + 5;
vector<ll> pre(N);
int digitSum(int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
void pref() {
  for (int i = 1; i < N; ++i) {
    pre[i] += digitSum(i) + pre[i - 1];
  }
}
void solve() {
  int n;
  cin >> n;
  cout << pre[n] << endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  pref();
  while (t--)
    solve();
  return 0;
}
