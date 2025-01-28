// ﷽
// Contest: EPIC Institute of Technology Round August 2024 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2002/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun 11 Aug 2024 05:59:06 PM EEST
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
  int n;
  cin >> n;
  deque<int>aq;
  deque<int>bq;
  for(int i=0;i<n;++i){
    int x;cin>>x;
    aq.push_back(x);
  }

  for(int i=0;i<n;++i){
    int x;cin>>x;
    bq.push_back(x);
  }
  while(aq.size()!=1){
    if(aq.front()!=bq.front()&&aq.front()!=bq.back()){
      cout<<"Alice"<<endl;return;
    }

    else if(aq.back()!=bq.front()&&aq.back()!=bq.back()){
      cout<<"Alice"<<endl;return;
    }
    if(aq.front()==bq.front()){
      aq.pop_front();
      bq.pop_front();
    }
    else if(aq.front()==bq.back()){
      aq.pop_front();
      bq.pop_back();
    }

    else if(aq.back()==bq.front()){
      aq.pop_back();
      bq.pop_front();
    }
    else if(aq.back()==bq.back()){
      aq.pop_back();
      bq.pop_back();
    }
  }
  cout << "Bob" << endl;
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
