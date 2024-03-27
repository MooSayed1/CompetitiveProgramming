
// ﷽
// Contest: Educational Codeforces Round 162 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1923/problem/B
// Memory Limit: 256
// Time Limit: 2500
// Start: Sat 24 Feb 2024 11:12:39 PM EET
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
  int n, k;
  cin >> n >> k;
  ll bullet;
  ll temp = 0;
  ll frq[n]{0};
  ll arr[n];
  for (auto &it : arr)
    cin >> it;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x < 0) {
      x = x * -1;
    }
    frq[x - 1] += arr[i];
  }

  for (int i = 0; i < n; ++i) {
    bullet = k;
    int j = i;
    do {
      temp = frq[j];
      frq[j] -= bullet;
      bullet -= temp;
      if (frq[j] > 0) {
        cout << "NO" << endl;
        return;
      }
      bullet += k;
      j++;
      i = j;
    } while (j < n && bullet > 0);

    if (j == n) {
      cout << "YES" << endl;
      return;
    }
  }
  // cout << "YES" << endl;
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
