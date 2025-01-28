// ﷽
// Contest: Level 1 qualification contest 24 round 1
// Judge: Codeforces
// URL: https://codeforces.com/group/ftB9bVYh2W/contest/553629/problem/I
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 10 Oct 2024 06:27:46 PM EEST
//
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
namespace __gnu_pbds{
    typedef tree<long long,
            null_type,
            less<long long>,
    rb_tree_tag,
    tree_order_statistics_node_update> ordered_set; 
}
using namespace __gnu_pbds;
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
bool can(string s,string ss){
  int j = 0; 
  for (int i = 0; i < s.size(); ++i) {
    if (j < ss.size() && (s[i] == ss[j] || s[i] == '?')) {
      ++j;
    }
  }
  return j == ss.size();
}
void solve() {
  string s,ss; cin>>s>>ss;

  int j = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '?' || s[i] == ss[j]) {
      if (j < ss.size() && (s[i] == '?' || s[i] == ss[j])) {
        s[i] = ss[j];
        j++;
      } else {
        s[i] = 'x';
      }
    }
  }
  if(can(s,ss)){
    yes;cout<<s<<endl;
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
