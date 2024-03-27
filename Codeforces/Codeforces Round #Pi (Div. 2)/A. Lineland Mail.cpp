// ﷽
// Contest: Codeforces Round #Pi (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/567/problem/A
// Memory Limit: 256
// Time Limit: 3000
// Start: Thu 08 Feb 2024 08:01:55 PM EET
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
  vector<int> arr(n);
  cin >> arr;
  int maxPos = arr.size() - 1;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == arr[0])
      cout << arr[i + 1] - arr[0] << " " << arr[maxPos] - arr[0] << endl;
    else if (arr[i] == arr[maxPos])
      cout << arr[maxPos] - arr[i - 1] << " " << arr[maxPos] - arr[0] << endl;
    else {
      cout<<min(arr[i]-arr[i-1],arr[i+1]-arr[i])<<" "<<max(arr[maxPos]-arr[i],arr[i]-arr[0])<<endl;
    }
  }
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
  return 0;
}
