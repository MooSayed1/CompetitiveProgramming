// ﷽
// Contest: Codeforces Round 224 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/382/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 23 Apr 2024 09:57:01 PM EET
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
  string s;
  cin >> s;
  string s1, s2;
  int pos = s.find('|');
  s1 = s.substr(0, pos);
  s2 = s.substr(pos + 1);
  string remain;
  cin >> remain;
  string lit = "", lar = "";
  int sub = abs((int)s1.size() - (int)s2.size());
  if (remain.size() < sub) {
    cout << "Impossible";
    return;
  } else if ((remain.size() - sub) & 1) {
    cout << "Impossible";
    return;
  }
  int val = sub + (remain.size() - sub) / 2;
  for (int i = 0; i < val; ++i)
    lit += remain[i];
  for (int i = val; i < remain.size(); ++i)
    lar += remain[i];
  if (s1.size() <= s2.size()) {
    s1 += lit;
    s2 += lar;
  } else {
    s1 += lar;
    s2 += lit;
  }
  cout << s1 << "|" << s2 << endl;
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
