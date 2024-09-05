// ﷽
// Contest: unknown_contest
// Judge: Codeforces
// URL: https://m2.codeforces.com/contest/2009/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 03 Sep 2024 07:00:12 PM EEST
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

void solve() {
  int n,k;
  cin>>n>>k;

  int l = k;
  int r = k+n-1;

  int minus = (k*(k-1))/2;
  int ans = LLONG_MAX;
  while (l<=r)
  {
    int mid = l + (r-l+1)/2;
    int sum1 = (mid*(mid+1))/2;
    int tm=k+n-1;
    int sum2 = tm*(tm+1)/2;
    sum2-=sum1;
    sum1-=minus;
    ans = min(ans, abs(sum1-sum2));
    if(sum2-sum1 < 0)
    {
      r = mid-1;
    }
    else {
      l=mid+1;
    }
  }

  cout << ans<<endl;
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
