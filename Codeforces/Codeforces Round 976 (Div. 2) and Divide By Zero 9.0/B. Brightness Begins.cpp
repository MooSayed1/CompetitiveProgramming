// ﷽
// Contest: Codeforces Round 976 (Div. 2) and Divide By Zero 9.0
// Judge: Codeforces
// URL: https://codeforces.com/contest/2020/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 30 Sep 2024 06:51:33 PM EEST
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

bool isPowerOf2(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

void solve() {
  int n;
  cin >> n;
  int tmp=2;
  int sm=0;
  int ans=0;

  while(1){
    if(sm+tmp<n){
      debug(tmp,sm);
      sm+=tmp;
    }
    else{
      sm+=(n-sm);
      ans++;break;
    }
    tmp<<=1;
    ans++;
  }
  cout << ans + sm << endl;
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