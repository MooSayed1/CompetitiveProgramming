// ﷽
// Contest: Codeforces Round 918 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1915/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 28 Dec 2023 05:34:50 PM EET
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

  for (int i = 0; i < 3; ++i) {
    int arr[3] = {0};
    for (int j = 0; j < 3; ++j) {
      char ch;
      cin >> ch;
      if(ch!='?')
      arr[ch - 'A']++;
    }
    // for (auto &it : arr)
    //   cout<<it<<" ";
    for (int i=0;i<3;++i)
      if (arr[i] == 0) {
        cout << (char)(i + 'A') << endl;
        break;
      }
  }
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
