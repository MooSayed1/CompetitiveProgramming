// ﷽
// Contest: Codeforces Beta Round 89 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/118/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 29 Jan 2024 08:25:46 PM EET
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
bool sortByPrice(pair<int, int> p1, pair<int, int> p2) {
  return p1.first < p2.first;
}
bool sortByQuality(pair<int, int> p1, pair<int, int> p2) {
  return p1.second < p2.second;
}
void solve() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        int x, y;
        std::cin >> x >> y;
        
        if (x != y) {
            std::cout << "Happy Alex" << std::endl;
            return ;
        }
    }

    std::cout << "Poor Alex" << std::endl;
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
