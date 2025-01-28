#include <bits/stdc++.h>
using namespace std;
#ifdef CODEFORCES
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fast                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"

void solve() {
  int n;
  cin >> n;
  vi arr(n);
  for(auto&it:arr)cin>>it;

  int sp_indx = -1;
  for (int i = 0; i < n; ++i) {
    if (arr[i] != -1 && arr[i] != 1) {
      sp_indx = i;
      break;
    }
  }

  set<int> st;
  st.insert(0);   
  vi pref(n + 1, 0);
  for (int i = 0; i < n; ++i) {
    pref[i + 1] = pref[i] + arr[i];
  }

  for (int i = 0; i < n; ++i) {  // i know it will get TLE but why not
    for (int j = i; j < n; ++j) {
      int subarray_sum = pref[j + 1] - pref[i];
      st.insert(subarray_sum);
    }
  }

  cout << st.size() << "\n";
  for (int sum : st) {
    cout << sum << " ";
  }
  cout << "\n";

}
int32_t main() {

  fast;
  int t = 1;
  cin>>t;
  while (t--)
    solve();
  return 0;
}
