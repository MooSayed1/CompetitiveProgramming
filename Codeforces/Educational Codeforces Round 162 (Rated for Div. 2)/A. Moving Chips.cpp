// ﷽
// Contest: Educational Codeforces Round 162 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1923/problem/0
// Memory Limit: 512
// Time Limit: 2000
// Start: Fri 23 Feb 2024 04:35:28 PM EET
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

int getright(bool *arr, int n) {
  for (int i = n - 1; i >= 0; --i)
    if (arr[i] == 1) {
      return i;
    }
  return -1;
}
int getLeft(bool *arr, int n) {

  for (int i = 0; i < n; ++i)
    if (arr[i] == 1) {
      return i;
    }
  return -1;
}

void solve() {
  int n;
  cin >> n;
  bool arr[n];
  int cnt = 0;
  for (auto &it : arr)
    cin >> it;
  int l = 0, r = 0;
  bool flag = 1;
  while (flag) {
  P:
    l = getLeft(arr, n);
    r = getright(arr, n);
    // cout<<l<<" "<<r<<endl;
    for (int i = r; i >= l; --i) {
      if (arr[i] == 0) {
        // for (auto &it : arr)
        //   cout << it << " ";
        // cout << endl;
        swap(arr[i], arr[r]);
        cnt++;
        goto P;
      }
    }
    flag = 0;
  }

  cout << cnt << endl;
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
