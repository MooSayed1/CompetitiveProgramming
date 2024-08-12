// ﷽
// Contest: Codeforces Round 959 sponsored by NEAR (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1994/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 25 Jul 2024 04:01:15 PM EEST
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

#define ll long long
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

void solve() {
  int n,m;cin>>n>>m;
  vector<vi>arr(n,vector<int>(m,0));
  for(int i = 0;i < n; ++i){
    for (int j = 0; j < m; ++j){
      cin >> arr[i][j];
    }
  }
  if(n*m==1){cout<<-1<<endl;return;}
  else if(n==1){
    if(m&1){
      reverse(arr[0].begin(),arr[0].end());
      swap(arr[0][m/2],arr[0][0]);
    }{
      reverse(arr[0].begin(),arr[0].end());
    }
  }
  else{

  }
  for(int i = 0;i < n; ++i){
    for (int j = 0; j < m; ++j){
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }
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
