// ﷽
// Contest: Codeforces Beta Round 44 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/47/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 29 Jan 2024 07:38:46 PM EET
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
  string s = "ABC";
  int l = 3;
  while (l--) {
    string t;
    cin >> t;
    int pos1 = s.find(t[0]), pos2 = s.find(t[2]);
    if (t[1] == '>' && pos1 > pos2)
      continue;
    else if (t[1] == '<' && pos1 < pos2)
      swap(s[pos1], s[pos2]);
    else 
      continue;
  }
  cout<<s<<endl;
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
