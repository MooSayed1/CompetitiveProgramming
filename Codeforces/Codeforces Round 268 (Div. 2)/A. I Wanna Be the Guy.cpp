// ﷽
// Contest: Codeforces Round 268 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/469/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 27 Dec 2023 11:24:04 AM EET
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
  int frq[100] = {0};
  int temp = 2;
  while (temp--) {
    int p;
    cin >> p;
    int arr[p];
    for (auto &it : arr) {
      cin >> it;
      frq[it - 1]++;
    }
  }

  for (int i = 0; i < n; ++i) {
    if (frq[i] == 0) {
      cout << "Oh, my keyboard!" << endl;
      return;
    }
  }

  cout << "I become the guy." << endl;
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
