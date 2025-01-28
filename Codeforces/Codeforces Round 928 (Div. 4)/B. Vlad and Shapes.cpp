// ﷽
// Contest: Codeforces Round 928 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1926/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 19 Feb 2024 04:39:00 PM EET
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
  // cout << "n" << n << endl;
  vector<string> arr(n);
  for (auto &it : arr)
    cin >> it;
  int temp = 0, cnt = 0;
  bool flag = false;
  for (int i = 0; i < n; ++i) {
    cnt = 0;
    string s = arr[i];
    bitset<31> bit(s);
    cnt = bit.count();
    if ((temp == cnt) && flag) {
      cout << "SQUARE" << endl;
      return;
    } else if ((temp != cnt) && flag) {
      cout << "TRIANGLE" << endl;
      return;
    }
    if (cnt != 0) {
      temp = cnt;
      flag = 1;
    }
  }
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
