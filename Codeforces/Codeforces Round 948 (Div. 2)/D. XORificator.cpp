// ﷽
// Contest: Codeforces Round 948 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1977/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 26 May 2024 07:05:43 PM EEST
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
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
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

template <typename T>
istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data) input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {
  for (const T &x : data) output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
  int n, m;
  cin >> n >> m;
  vector<string> matrix(n);
  for (int i = 0; i < n; ++i) {
    cin >> matrix[i];
  }

  vector<int> cntCol(m, 0);
  for (int j = 0; j < m; ++j) {
    for (int i = 0; i < n; ++i) {
      if (matrix[i][j] == '1') {
        cntCol[j]++;
      }
    }
  }

  int maxi = 0;
  vi best(n, 0);
  for (int mask = 0; mask < (1 << n); ++mask) {
    vi currRow(n, 0);
    vi currCnt = cntCol;

    for (int i = 0; i < n; ++i) {
      if (mask & (1 << i)) {
        currRow[i] = 1;
        for (int j = 0; j < m; ++j) {
          if (matrix[i][j] == '1') {
            currCnt[j]--;
          } else {
            currCnt[j]++;
          }
        }
      }
    }

    int spCols = 0;
    for (int j = 0; j < m; ++j) {
      if (currCnt[j] == 1) {
        spCols++;
      }
    }

    if (spCols > maxi) {
      maxi = spCols;
      best = currRow;
    }
  }

  cout << maxi << endl;
  for (int i = 0; i < n; ++i) {
    cout << best[i];
  }
  cout << endl;
}
int32_t main() {
  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
