// ﷽
// Contest: ITMO Academy: pilot course - Binary Search - Step 1
// Judge: Codeforces
// URL: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
// Memory Limit: 512
// Time Limit: 2000
// Start: Mon 12 Aug 2024 06:23:25 PM EEST
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
bool binarySearch(vi&arr,int x){
  int l=0,r=arr.size()-1;
  while(l<=r){
    int mid=(l+r)/2;
    if(x==arr[mid])return 1;
    else if(arr[mid]<x){
      l=mid+1;
    }else{
      r=mid-1;
    }
  }
  return 0;
}
void solve() {
  int n,q;
  cin >> n >> q;
  vi arr(n);
  cin >> arr;
  while(q--){
    int x;
    cin >> x;
    if(binarySearch(arr,x)){
      yes;
    }
    else no;
  }

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
