// ﷽
// Contest: EPIC Institute of Technology Round August 2024 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2002/problem/D1
// Memory Limit: 512
// Time Limit: 2000
// Start: Sun 11 Aug 2024 06:19:49 PM EEST
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

#define int long long
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
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};

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

bool isValid(const vector<int>& pos, const vector<int>& arr, int n) {
  for (int i = 2; i <= n; i++) {
    if (pos[arr[i]] > pos[i]) {
      return false;
    }
  }
  return true;
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t;
  cin >> t;

  while (t--) {
    int n, q;
    cin >> n >> q;

    vi arr(n + 1);
    for (int i = 2; i <= n; i++) {
      cin >> arr[i];
    }

    vi p(n + 1);
    vi pos(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> p[i];
      pos[p[i]] = i;
    }

    while (q--) {
      int x, y;
      cin >> x >> y;

      swap(p[x], p[y]);
      swap(pos[p[x]], pos[p[y]]);

      if (isValid(pos, arr, n)) {
        yes;
      } else {
        no;
      }
    }
  }
  return 0;
}
