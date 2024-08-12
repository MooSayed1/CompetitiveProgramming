// ﷽
// Contest: Educational Codeforces Round 167 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1989/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 01 Jul 2024 03:44:01 AM EEST
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
  string s,s2;cin>>s>>s2;
  vi frq(26,0);
  int ans=0,cnt=0;
  for(int i=0;i<s2.size();++i){
    int tmp=i;
    cnt=0;
    for(int j=0;j<s.size();j++){
			if(tmp == s2.size())break;
      if(s2[tmp]==s[j]){
        tmp++;cnt++;
      }
    }
    ans=max(ans,cnt);
  }
  cout << s.size()+s2.size()-ans << endl;
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
