// ﷽
// Contest: Codeforces Round 111 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/160/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 09 Feb 2024 05:32:15 PM EET
//
#include <bits/stdc++.h>
#include <functional>
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
  vi arr(n);
  cin >> arr;
  sort(all(arr));
   //[cout << arr << endl;
  int pos = arr.size() - 1;
  ll s1 = 0, s2 = 0;
  for (int j = 0; j < n; j++) {
    s1=0,s2=0;
    for (int i = 0; i < pos; ++i) {
      s1 += arr[i];
    }
    for (int i = pos; i < n; ++i) {
      s2 += arr[i];
    }
    // cout<<s1<<" "<<s2<<endl;

    if (s2 > s1) {
      cout << arr.size() - pos;
      return;
    }
    pos--;
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
