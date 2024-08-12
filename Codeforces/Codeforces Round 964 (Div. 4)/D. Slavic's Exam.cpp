// ﷽
// Contest: Codeforces Round 964 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1999/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 06 Aug 2024 08:36:19 PM EEST
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

void solve() {
    string s,t;
    cin >> s >> t;
    int i=0,j=0;
    bool f=0;
    while(i<s.size()&&j<t.size()) {
 
        if(s[i]==t[j]||s[i]=='?') {
            s[i++]=t[j];
        }
        j++;
    }
    if(i==t.size()) {
        yes;
        for(char ch:s) {
            if(ch=='?')cout<<'a';
            else cout << ch;
        }
    cout << endl;
    }else no;
 
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
