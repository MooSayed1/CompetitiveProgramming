// ﷽
// Contest: Codeforces Beta Round 70 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/78/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 31 Jan 2024 09:41:26 PM EET
//
#include <bits/stdc++.h>
using namespace std;
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back

void solve() {
  int n;
  cin >> n;
  string arr = "ROYGBIV";
  string s;
  int temp = 3;
  for (int i = 0; i < 7; i++)
    s += arr[i];
  for (int i = 7; i < n; i++) {
    if (temp > 6)
      temp = 3;
    s += arr[temp++];
  }
  cout << s;
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
