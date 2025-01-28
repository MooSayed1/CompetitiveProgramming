// ﷽
// Contest: Codeforces Round 945 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1973/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 18 May 2024 07:00:23 AM EEST
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
#define OO 1e8
#define endl "\n"

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
   int arr[3];
   cin >> arr[0] >> arr[1] >> arr[2];
   int temp = arr[0] + arr[1] + arr[2];

   if(temp & 1){
     cout<< -1 << endl;
     return;
   }
   temp = arr[0];
   debug(temp);
   while(temp--){
     arr[2]--;
     sort(arr+1,arr+3);
     debug_itr(arr, arr+3);
   }
   cout<< arr[0] + arr[1] << endl;
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
