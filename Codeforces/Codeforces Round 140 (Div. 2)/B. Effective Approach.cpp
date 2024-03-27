// ﷽
// Contest: Codeforces Round 140 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/227/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 30 Jan 2024 09:52:07 PM EET
//
#include <algorithm>
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
  ll vesya = 0, petya = 0;
  int arr[n];
  for (auto &it : arr)
    cin >> it;
  int q = 0;
  cin >> q;
  int frq[100005] = {0};
  vector<int> queirs(q);
  for (int i = 0; i < q; ++i) {
    cin >> queirs[i];
    ++frq[queirs[i] - 1];
  }
  for (int i = 0; i < n; ++i) {
    if (frq[arr[i] - 1] != 0) {
      vesya += (frq[arr[i] - 1] * (i+1)) ;
      petya += (n - i) * frq[arr[i] - 1];
    }
  }

  cout<<endl;
  cout << vesya << " " << petya;
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
