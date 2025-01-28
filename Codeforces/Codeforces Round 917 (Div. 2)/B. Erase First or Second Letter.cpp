// ﷽
// Contest: Codeforces Round 917 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1917/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 14 Feb 2024 10:53:13 PM EET
//
#include <bits/stdc++.h>
using namespace std;
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  set<char> st;
  long long int ans = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    if (st.find(s[i]) == st.end()) {
      cnt++;
      ans += cnt;
    } else {
      ans += cnt;
    }
    st.insert(s[i]);
  }
  cout << ans << endl;
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
