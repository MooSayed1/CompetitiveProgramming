// ﷽
// Contest: Codeforces Beta Round 16 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/16/problem/B
// Memory Limit: 64
// Time Limit: 500
// Start: Thu 25 Jan 2024 01:59:04 PM EET
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

bool compareBySecond(const std::pair<int, int> &a,
                     const std::pair<int, int> &b) {
  return a.second > b.second;
}

void solve() {

  ll n = 0, m = 0, maxMatches = 0;
  cin >> n >> m;
  vector<pair<ll, ll>> arr(m);
  for (auto &it : arr)
    cin >> it.first >> it.second;

  sort(all(arr), compareBySecond);

  // for (auto &it : arr)
  //   cout<<it.first<<" "<<it.second<<endl;
  for (int i = 0; i < m; ++i) {

    ll a = arr[i].first;
    ll b = arr[i].second;

    if (n - a >= 0) {
      n -= a;
      maxMatches += a * b;
    } else {
      maxMatches += n * b;
      break;
    }
  }
  cout << maxMatches << endl;
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
