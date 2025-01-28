// ﷽
// Contest: Codeforces Round 961 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1995/problem/B1
// Memory Limit: 512
// Time Limit: 1500
// Start: Tue 23 Jul 2024 06:26:44 PM EEST
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

int a[200010];
void solve(){
  int n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++) cin>>a[i];
  sort(a+1,a+n+1);
  int ans=0,i=0,j=1,x=0;
  while(i<n){
    i++;
    x+=a[i];
    while(x>k||a[i]-a[j]>1) x-=a[j],j++;
    ans=max(ans,x);
  }
  cout<<ans<<endl;
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
