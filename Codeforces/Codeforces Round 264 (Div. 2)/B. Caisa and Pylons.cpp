// ﷽
// Contest: Codeforces Round 264 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/463/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 25 Jan 2024 02:44:12 PM EET
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
  int energy = 0, dollars = 0;
  // int *arr = new int[n + 1];
  int arr[n + 1];
  arr[0] = 0;
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
    int sub = arr[i - 1] - arr[i];
    if (sub < 0 && energy < (sub * -1)) {
      dollars += (sub * -1) - energy;
      energy = 0;
    } else {
      energy += sub;
    }
  }
  cout << dollars << endl;
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
