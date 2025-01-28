// ﷽ Contest: IEEEXtreme 18.0
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/another-sliding-window-problem/
// Memory Limit: 64
// Time Limit: 500
// Start: Sat 26 Oct 2024 07:06:09 AM EEST
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
#define ll long long

class SegmentTree {
public:
  int size;
  vector<int> maxs;

  SegmentTree(int n) {
    size = 1;
    while (size < n) size *= 2;
    maxs.assign(2 * size, LLONG_MIN);
  }

  void build(const vi& a) {
    build(a, 0, 0, size);
  }

  int maxSeg(int l, int r) {
    return maxSeg(l, r, 0, 0, size);
  }

private:
  void build(const vi& a, int x, int lx, int rx) {
    if (rx - lx == 1) {
      if (lx < (int)a.size()) {
        maxs[x] = a[lx];
      }
      return;
    }
    int mid = (lx + rx) / 2;
    build(a, 2 * x + 1, lx, mid);
    build(a, 2 * x + 2, mid, rx);
    maxs[x] = max(maxs[2 * x + 1], maxs[2 * x + 2]);
  }

  int maxSeg(int l, int r, int x, int lx, int rx) {
    if (lx >= r || l >= rx) return LLONG_MIN;
    if (lx >= l && rx <= r) return maxs[x];
    int mid = (lx + rx) / 2;
    int left = maxSeg(l, r, 2 * x + 1, lx, mid);
    int right = maxSeg(l, r, 2 * x + 2, mid, rx);
    return max(left, right);
  }
};

int calcop(const vi &arr, int l, int r) {
  int n = r - l + 1;
  deque<int> subarr(arr.begin() + l, arr.begin() + r + 1);
  int tmp=0;
  if(n&1){
    tmp=subarr.back();
    subarr.pop_back();
  }
  int ans=INT_MIN;
  while(!subarr.empty()){
    ans=max(subarr.back()+subarr.front(),ans);
    subarr.pop_back();
    subarr.pop_front();
  }
  if(n&1){
    ans=max(ans,tmp);
  }
  return ans;
}

void solve() {
  int n, q;
  cin >> n >> q;
  vi arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];

  SegmentTree st(n);
  st.build(arr);

  while (q--) {
    int x;
    cin >> x;
    int result = 0;

    for (int l = 0; l < n; ++l) {
      int r = l;
      while (r < n) {
        int optcost = calcop(arr, l, r);
        vi tmp(arr.begin()+l,arr.begin()+r);
        debug(tmp);
        debug(optcost);
        if (optcost > x) break;
        result += arr[r] - arr[l];
        r++;
      }
    }
    cout << result << endl;
  }
}

int32_t main() {
  fastio();
  int t = 1;
  // cin>>t;
    while (t--) solve();
  return 0;
}
