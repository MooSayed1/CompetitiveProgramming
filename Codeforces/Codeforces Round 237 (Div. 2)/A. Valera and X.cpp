// ﷽
// Contest: Codeforces Round 237 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/404/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 06 Mar 2024 07:25:06 PM EET
//
#include <bits/stdc++.h>
#include <bitset>
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
  vector<string> arr(n);
  cin >> arr;
  int frq[26]{0};
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; j++)
      frq[arr[i][j] - 'a']++;
  // for (int i = 0, j = n - i - 1; i < n - 1; i++)
  //   if (arr[i][i] != arr[i + 1][i + 1] && arr[j][j] != arr[j - 1][j - 1]) {
  //     no;
  //     return;
  //   }
  for (int i = 0, j = n - i; i < n - 1; i++)
    if (arr[i][i] != arr[i + 1][i + 1]) {
      no;
      return;
    }
  int len = n - 1;
  
  for (int j = len; j >= 1; j--)
    if (arr[len - j][j] != arr[len-(j-1)][j - 1]) {
      no;
      return;
    }
  int cnt = 0;
  vector<int> c;
  for (auto &it : frq)
    if (it != 0) {
      cnt++;
      c.push_back(it);
    }
  int dialog = 0, shit = 0;

  if (c[0] == n * 2 - 1) {
    dialog = c[0];
    shit = c[1];
  } else {
    dialog = c[1];
    shit = c[0];
  }
  // cout << "shit" << shit << endl;
  if (cnt == 2) {
    if (shit == (n * n) - (n * 2 - 1)) {
      yes;
      return;
    } else {
      no;
      return;
    }
  }
  no;
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
