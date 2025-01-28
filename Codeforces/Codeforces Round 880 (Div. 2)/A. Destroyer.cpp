// ﷽
// Contest: Codeforces Round 880 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1836/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 06 Feb 2024 01:09:50 PM EET
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
  int frq[105]{0};
  int n;
  cin >> n;
  int arr[n];
  for (auto &it : arr) {
    cin >> it;
    ++frq[it];
  }
  for(int i=0;i<101;++i)
  {
    if(frq[i]<frq[i+1]){
      no;
      return;
    }
  }
  yes;


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
