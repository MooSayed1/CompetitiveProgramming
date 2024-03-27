// ﷽
// Contest: Codeforces Round 923 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1927/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 06 Feb 2024 05:04:11 PM EET
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
  int n, m, k;
  int cnt = 0, cnta = 0, cntb = 0;
  cin >> n >> m >> k;
  vi arr1(n), arr2(m);
  bitset<2000005> frqa, frqb;
  for (auto &it : arr1) {
    cin >> it;
    frqa[it] = 1;
  }
  for (auto &it : arr2) {
    cin >> it;
    frqb[it] = 1;
  }

  for (int i = 1; i <= k; ++i) {
    if ((frqa[i] & frqb[i])) {
      cnt++;
      cnta++;
      cntb++;
    } else if (frqa[i] & !frqb[i]) {
      cnt++;
      cnta++;
    } else if (!frqa[i] & frqb[i]) {
      cnt++;
      cntb++;
    } else if (!(cnta || cntb)) {
      cout << "NO" << endl;
      return;
    }
  }

  // cout << cnt << " " << cnta << " " << cntb << endl;
  if (cnt >= k && cnta >= k / 2 && cntb >= k / 2) {
    yes;
    return;
  }
  no;
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
