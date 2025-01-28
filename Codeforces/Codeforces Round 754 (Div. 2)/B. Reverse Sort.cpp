// ﷽
// Contest: Codeforces Round 754 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1605/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 20 Jun 2024 12:17:58 AM EEST
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
  int n;cin>>n;string s;cin >> s;
  int k = 0;
  vi res;
  for(int i = n-1; i >= 0; i--){
    while(s[k] != '1'&&k<n){
      k++;
    }
    if(s[i] == '0'&&k<n){
      swap(s[k],s[i]);
      res.emplace_back(k+1);
      res.emplace_back(i+1);
    }
    if(is_sorted(all(s))){
      break;
    }
  }
  sort(all(res));
  if(res.empty()){
    cout << 0 << endl;
  }
  else{
    cout << 1 << endl;
    cout << res.size()<< ' ';
    cout << res << endl;
  }
  debug(res);
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
