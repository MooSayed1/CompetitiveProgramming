// ﷽
// Contest: Codeforces Round 268 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/469/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 28 May 2024 02:30:48 AM EEST
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
#define OO 1e8
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
 int p, q, l, r;
  cin >> p >> q >> l >> r;
  bitset<2000> freqa;
  bitset<2000> freqb;
  int a, b;
  while (p--) {
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
      freqa.set(i);
    }
  }
  while (q--) {
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
      freqb.set(i);
    }
  }
  int ans = 0;
  for (int i = l; i <= r; i++) {
    if ((freqa&(freqb<<i)).count()) {
      ans++;
    }
  }
  cout<<ans;
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
