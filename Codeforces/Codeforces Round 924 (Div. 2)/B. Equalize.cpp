// ﷽
// Contest: Codeforces Round 924 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1928/problem/B#
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 11 Feb 2024 07:43:16 PM EET
//
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
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
  set<int> arr;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    arr.insert(x);
  }
  vi vec(n);
  copy(all(arr), vec.begin());
  int temp = n;
  n = n - count(all(vec), 0);
  vec.resize(n);

  // cout << vec << endl;

  for (int i = 0; i < n; ++i) {
    if (i == n - 1) {
      if (vec[i - 1] - vec[i] > 0 && vec[i - 1] - vec[i] <= temp &&
          (vec[i - 1] && vec[i])) {
        vec[i] += temp;
        temp--;
        break;
      }
    }

    if (vec[i] + temp > vec[i + 1] && vec[i] + temp - vec[i + 1] <= temp &&
        (vec[i] && vec[i + 1])) {
      vec[i] += temp;
      temp--;
      // cout<<"wtf"<<endl;
    }
  }
  cout << vec << endl;
  // if (n - temp)
  //   cout << n - temp << endl;
  // else
  //   cout << 1 << endl;
}
void solve2() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  a.resize(unique(a.begin(), a.end()) - a.begin());
  int pnt = 0, ans = 0;
  for (int i = 0; i < a.size(); i++) {
    while (a[i] - a[pnt] >= n) {
      pnt++;
    }
    ans = max(ans, i - pnt + 1);
  }
  cout << ans << endl;
  // cout << a << endl;
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
