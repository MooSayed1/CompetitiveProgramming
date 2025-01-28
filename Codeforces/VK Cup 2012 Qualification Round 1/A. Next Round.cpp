// ﷽
// Contest: VK Cup 2012 Qualification Round 1
// Judge: Codeforces
// URL: https://codeforces.com/contest/158/problem/A
// Memory Limit: 256
// Time Limit: 3000
// Start: Thu 25 Jan 2024 03:42:13 PM EET
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
  int n, k, cnt = 0;
  cin >> n >> k;
  int arr[n];
  for (auto &it : arr) 
    cin >> it;

  for (int i = 0; i < n; ++i) {

    if (arr[i] > 0 && arr[i] >= arr [k-1])
      cnt++;
  }
  cout << cnt << endl;
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
