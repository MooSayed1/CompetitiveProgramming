// ﷽
// Contest: Codeforces Round 922 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1918/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 31 Jan 2024 01:00:33 AM EET
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
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i].first;
  for (int i = 0; i < n; ++i)
    cin >> arr[i].second;
 sort(all(arr)); 
  for (int i = 0; i < n; ++i)
    cout<< arr[i].first<<" ";
  cout<<"\n";
  for (int i = 0; i < n; ++i)
    cout<< arr[i].second<<" ";
  cout<<"\n";
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
   cin>>t;
  while (t--)
    solve();
  return 0;
}
