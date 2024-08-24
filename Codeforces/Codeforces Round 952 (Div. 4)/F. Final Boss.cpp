// ﷽
// Contest: Codeforces Round 952 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1985/problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 14 Aug 2024 07:05:33 PM EEST
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

int h,n;
bool can(vi& arr,vi& coldown,int time){
  int ans=0;
  for(int i=0;i<arr.size();++i){
    debug(ans);
    ans+=((time/coldown[i])+1)*arr[i];
    if(ans>=h)return 1;
  }
  return (ans>=h)?1:0;
}
void solve() {
  cin >> h >> n;
  vi arr(n);
  cin >> arr;
  vi cldown(n);
  cin >> cldown;
  int l=0,r=1e11;
  while(l<=r){
    int mid=(l+r)/2;
    if(can(arr,cldown,mid))
    {
      r=mid-1;
    }else{
      l=mid+1;
    }
  }
  cout << l + 1<< endl;
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
