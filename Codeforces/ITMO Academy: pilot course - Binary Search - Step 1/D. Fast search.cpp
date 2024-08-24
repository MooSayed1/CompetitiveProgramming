// ﷽
// Contest: ITMO Academy: pilot course - Binary Search - Step 1
// Judge: Codeforces
// URL: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
// Memory Limit: 512
// Time Limit: 2000
// Start: Mon 12 Aug 2024 07:06:12 PM EEST
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

int fac(int n){
  if(n<=1){
    return 1;
  }
  return n * fac(n-1);
}
int ncr(int n,int r){
  if (r > n) return 0;
  return (fac(n))/(fac(r)*fac(n-r));
}

void solve() {
  int n,r;
  cin >> n >> r;
  cout << ncr(n,r) << endl;
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
