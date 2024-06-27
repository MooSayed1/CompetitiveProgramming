// ﷽
// Contest: Team Contest #1
// Judge: Codeforces
// URL: https://codeforces.com/group/qxlLGDBwj5/contest/528100/problem/A
// Memory Limit: 1024
// Time Limit: 3000
// Start: Mon 24 Jun 2024 11:17:34 AM EEST
//
#include <bits/stdc++.h>
using namespace std;
#ifdef MOHAMED
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int,int>
#define OO 2e9
#define endl "\n"

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0 ; i < n; i++) {
    cin >> a[i];
  }
  int q; cin >> q;
  vi x(q, 0);
  vi y(q, 0);
  for(int i = 0 ; i < q; i++) {
    cin >> x[i];
    cin >> y[i];
  }
  for (int i = 0; i < q; i++) {
    int l = x[i];
    int r = y[i];
    int diff = INT_MAX;
    multiset<int>st(a.begin()+l-1, a.begin()+r);
    for (auto it = st.begin(); next(it) != st.end(); ++it) {
      diff = min(diff, *next(it)-*it);
    }
    cout << diff << endl;
  }
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
