// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1647
// Memory Limit: 512
// Time Limit: 1000
// Start: Sat 10 May 2025 10:24:15 PM EEST
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
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;
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

int n, q, SQ;
vi arr, blkMin;
// vi blks;

void preProcess() {
  for (int i = 0; i < n; ++i) {
    // blks[i / SQ] = arr[i];
    blkMin[i/SQ]=min(blkMin[i/SQ],arr[i]);
  }
}

int query(int l,int r){
  int ans=LLONG_MAX;
  while(l<=r){
    if(l%SQ==0&&l+SQ<=r){
      ans=min(blkMin[l/SQ],ans);
      l+=SQ;
    }else{
      ans=min(ans,arr[l]);
      l++;
    }
  }
  return ans;
}

void solve() {
  cin >> n >> q;
  arr.resize(n);
  cin >> arr;
  SQ = ceil(sqrt(n));
  blkMin.assign(SQ,LLONG_MAX);
  // blks.resize(n + 1);
  preProcess();

  while(q--){
    int l,r;cin>>l>>r;--l,--r;
    cout << query(l,r) << endl;
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
