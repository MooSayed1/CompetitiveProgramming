// ﷽
// Contest: Codeforces Beta Round 71
// Judge: Codeforces
// URL: https://codeforces.com/contest/79/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 26 Apr 2024 06:07:25 PM EEST
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
   int n;
   cin >> n;
   string s;
   cin >> s;

   set<char>st(all(s));
   map <char,char>mp;
   string d(all(st));

   int start = 0;
   int end = d.size() - 1;

   while(start <= end){
       mp[d[start]] = d[end];
       mp[d[end]] = d[start];
       start++;
       end--;
   }

   string res;
   for(auto&it:s)
       res += mp[it];

   cout << res << endl;
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

