// ﷽
// Contest: The 2023 ICPC Egyptian Collegiate Programming Contest (Qualifications Day 5)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/530046/problem/J
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri 05 Jul 2024 04:50:17 PM EEST

#include<bits/stdc++.h>

#ifdef MOHAMED 
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long

using namespace std;


int start;
int n;
string s;
int count_inversions(vector<int>& A) {
    int cnt = 0;
    for (int i = 0; i < A.size(); i++) {
        cnt += abs((i+1) - A[i]);
    }
    return cnt/2;
}
void solve() {
  cin>>n>>s
    vector<int> v;
  int I=0,O=0;
  v.clear();
  for(auto &i:s)
  {
    if(i=='0')
      O++;
    else
      I++;
  }

  int start1=0;
  if(abs(O-I)>1)
  {
    cout<<"-1\n";
    return;
  }
  int p1=-1,p0=0;
  if(O>I)
    p1=0,p0=-1;
  for(auto &i:s)
  {
    if(i=='0')
      v.push_back(p0+=2);
    else
      v.push_back(p1+=2);
  }

  vector<int>v2;
  int cnt=INT_MAX;
  if(O==I)
  {
    p1=0,p0=-1;
    for(auto &i:s)
    {
      if(i=='0')
        v2.push_back(p0+=2);
      else
        v2.push_back(p1+=2);
    }
    cnt=count_inversions(v2);

  }


  debug(v);

  cout << min(cnt,count_inversions(v))<<endl;
}
int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int n = 1;
   cin>>n;
  while (n--)
    solve();
  return 0;
}
