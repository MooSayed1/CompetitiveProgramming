// ﷽
// Contest: Codeforces Round 304 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/546/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri 27 Sep 2024 01:58:02 AM EEST
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
  int n;
  cin >> n;
  deque<int>q1,q2;
  int tmp;cin>>tmp;
  for(int i=0;i<tmp;++i){
    int x;cin>>x;
    q1.push_back(x);
  }
  cin >> tmp;
  for(int i=0;i<tmp;++i){
    int x;cin>>x;
    q2.push_back(x);
  }
  int cnt=0;
  while(1){
    if(q1.empty()){
      cout << cnt << " " << 2 << endl;return;
    }else if(q2.empty()){
      cout << cnt << " " << 1 << endl;return;
    }
    if(cnt>10000){cout<<-1<<endl;return;}
    if(q1.front()>q2.front()){
      q1.push_back(q2.front());
      q1.push_back(q1.front());
      q1.pop_front();
      q2.pop_front();
    }else {
      q2.push_back(q1.front());
      q2.push_back(q2.front());
      q1.pop_front();
      q2.pop_front();
    }
    cnt++;
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
