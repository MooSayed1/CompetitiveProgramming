// ﷽
// Contest: Sheet #6 (Recursion)
// Judge: Codeforces
// URL: https://codeforces.com/group/0J9Dua2OGM/contest/429500/problem/I
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 28 Jan 2024 05:16:16 PM EET
//
#include <bits/stdc++.h>
using namespace std;
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               
#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
int cnt=0;
void solve(string s) {
  int len=s.size()-1;
if(len==0)
  return;
if(s[len]=='i'||s[len]=='o'||s[len]=='e'||s[len]=='u'||s[len]=='a'||s[len]=='I'||s[len]=='O'||s[len]=='E'||s[len]=='U'||s[len]=='A')
  cnt++;
s.pop_back();
return solve(s);

}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  string s;
  getline(cin,s);
  int len=s.size();
    solve(s);  
    cout<<cnt;
  return 0;
}
