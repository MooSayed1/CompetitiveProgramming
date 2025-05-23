// ﷽
// Contest: Codeforces Round 306 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/550/problem/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 19 Sep 2024 05:29:15 PM EEST
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
  string s;
  cin >> s;
  string str=s;
  bool f1=0,f2=0;
  for(int i=0;i<s.size()-1;++i){
    if(s[i]=='A'&&s[i+1]=='B'&&!f1){
      f1=1;
      s[i]='0';
      s[i+1]='0';
    }
    if(s[i]=='B'&&s[i+1]=='A'&&!f2){
      f2=1;
      s[i]='0';
      s[i+1]='0';
    }
    if(f1&&f2){
      yes;
      return;
    }
  }
  s = str;
  reverse(all(s));
  debug(s);
  f1=0,f2=0;
  for(int i=0;i<s.size()-1;++i){
    if(s[i]=='A'&&s[i+1]=='B'&&!f1){
      f1=1;
      s[i]='0';
      s[i+1]='0';
    }
    if(s[i]=='B'&&s[i+1]=='A'&&!f2){
      f2=1;
      s[i]='0';
      s[i+1]='0';
    }
    if(f1&&f2){
      yes;
      return;
    }
  }
  no;
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
