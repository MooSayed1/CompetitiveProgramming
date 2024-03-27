// ﷽
// Contest: Codeforces Round 913 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1907/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 02 Feb 2024 02:10:37 AM EET
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
    string s;
    cin >> s;
 
    string r;
    int ignore_l = 0, ignore_h = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        char c = s[i];
        if (c == 'b') ignore_l++;
        else if (c == 'B') ignore_h++;
        else if (c < 'a') {
            if (ignore_h > 0) ignore_h--;
            else r += s[i];
        } else {
            if (ignore_l > 0) ignore_l--;
            else r += s[i];
        }
    }
 
    reverse(r.begin(), r.end());
 
    cout << r << '\n';
}
 

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
