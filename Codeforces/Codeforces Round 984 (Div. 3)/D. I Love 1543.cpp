// ﷽
// Contest: Codeforces Round 984 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2036/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat 02 Nov 2024 05:10:08 PM EET
//
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
namespace __gnu_pbds {
typedef tree<long long,
null_type,
less<long long>,
rb_tree_tag,
tree_order_statistics_node_update> ordered_set; 
}
using namespace __gnu_pbds;
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
#define f(i, a, b) for (int i = a; i < b; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int,int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
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

void solve() {
  int n, m;
  cin >> n >> m; 

  vector<string> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }

  string tar = "1543";
  int cnt = 0;
  int tms = min(n, m) / 2; 

  for (int k = 0; k < tms; k++) {
    int tar_idx = 0;
    string tmp;
    bool f = false;
    int strow = -1, stcol = -1;

    for (int j = k; j < m - k && !f; j++) { // top
      debug(k,j,arr[k][j]); 
      if (arr[k][j] == '1') {
        strow = k;
        stcol = j;
        f = true;
      }
    }
    if(!f){
      for (int i = k + 1; i < n - k && !f; i++) {// right 
        debug(i,arr[i][m-k-1]); 
        if (arr[i][m - k - 1] == '1') {
          strow = i;
          stcol = m - k - 1;
          f = true;
        }
      }
    }

    if(!f){
      for (int j = m - k - 2; j >= k && !f; j--) {//bottum
        debug(j,arr[n - k - 1][j]); 
        if (arr[n - k - 1][j] == '1') {
          strow = n - k - 1;
          stcol = j;
          f = true;
        }
      }
    }
    if(!f){
      for (int i = n - k - 2; i > k && !f; i--) {// left
        debug(i,arr[i][k]); 
        if (arr[i][k] == '1') {
          strow = i;
          stcol = k;
          f = true;
        }
      }
    }

    // انا بعوم ف الكود
    debug(f);
    if (!f) continue;

    int row = strow, col = stcol;
    tar_idx = 0;
    tmp.clear();

    do {
      if (arr[row][col] == tar[tar_idx]) {
        tmp += tar[tar_idx++];
        if (tmp == tar) {
          cnt++;
          tmp.clear();
          tar_idx = 0;
        }
      } else {
        tmp.clear();
        tar_idx = 0;
      }

      if (row == k && col < m - k - 1) col++;                   
      else if (col == m - k - 1 && row < n - k - 1) row++;      
      else if (row == n - k - 1 && col > k) col--;              
      else if (col == k && row > k) row--;                      

    } while (row != strow || col != stcol); 
  }

  cout << cnt << endl;
}

int32_t main() {
  fastio();
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
