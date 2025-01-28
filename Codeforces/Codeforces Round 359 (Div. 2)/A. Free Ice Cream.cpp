// ﷽
// Contest: Codeforces Round 359 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/686/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 24 Dec 2023 10:31:46 AM EET
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
  ll x;
  cin >> n >> x;
  int distress = 0;
  while (n--) {
    char sign;
    int d;
    cin >> sign;
    cin >> d;
    if (sign == '+')
      x += d;
    else if (sign == '-') {
      if (d <= x)
        x -= d;
      else
        distress++;
    }
  }
  cout<<x<<" "<<distress<<endl;
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  solve();
  return 0;
}
