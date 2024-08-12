// ﷽
// Contest: Codeforces Round 957 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1992/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 15 Jul 2024 12:49:42 AM EEST
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
  int n,m,k;cin>>n>>m>>k;
  string s;cin>>s;
  int logs=m-1,water=0,croc=0;
  for(int i=0; i < s.size();i++)
  {
    if (s[i]=='L')
    {
      logs=m;
    }
    else if(s[i]=='W')
    {
      if(logs<=0)water++;
    }
    else
    {
      if(logs<=0)croc++;
    }
    logs--;
  }
  if (water>k) croc++;
  if(!croc)yes;
  else no;
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
