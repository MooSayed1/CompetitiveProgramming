// ﷽
// Contest: Educational Codeforces Round 169 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2004/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 15 Aug 2024 05:53:00 PM EEST
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
  int l,r,L,R;
  vi pref(105);
  cin >> l >> r >> L >> R;
  pref[l]++;
  pref[r+1]--;
  pref[L]++;
  pref[R+1]--;
  for(int i=0;i<104;++i){
    pref[i+1]+=pref[i];
  }
  int cnt1=0,cnt2=0;
  int fir1,las1,fir2,las2;
  for(int i=0;i<104;++i){
    if(pref[i]==1){
      fir1=i;break;
    }
  }

  for(int i=0;i<104;++i){
    if(pref[i]==2){
      fir2=i;break;
    }
  }

  for(int i=104;i>=0;--i){
    if(pref[i]==1){
      las1=i;break;
    }
  }

  for(int i=104;i>=0;--i){
    if(pref[i]==2){
      las2=i;break;
    }
  }
  for(auto&it:pref){
    if(it==1){
      cnt1++;
    }else if(it==2)cnt2++;
  }
  if(cnt1>0&&cnt2==0){
    cout << 1 << endl;
  }
  else if(cnt2>0&&cnt1==0){
    cout << r-l << endl;
  }
  else if(fir1<fir2&&las1>las2){
    cout << las2-fir2+2 << endl;
  }else if(las2>las1){
    cout << las2-fir2+1 << endl;
  }else if(fir2<fir1){
    cout <<  las2-fir2+1 << endl;
  }
  debug(cnt1,cnt2);
  debug(pref);
  debug(fir1,las1,fir2,las2);
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
