#include <bits/stdc++.h>
using namespace std;
#ifdef CODEFORCES
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"

void solve() {
  int n, b, c;
  cin >> n >> b >> c;

  if (b == 0) {
    if (n > c + 2) {
      cout << -1 << endl;
      return;
    }
  }else{
    if(c<n){
      cout<<n-(n - 1 - c) / b + 1;
      return;
    }
    else{
      cout<<n<<endl;
      return;
    }
  }

  int res = (n - c) / b;
  if ((n - c) % b != 0) res++;
  if (res <= 0) {
    cout << n << endl;
  } else {
    cout << n - res << endl;
  }
}
int32_t main() {
  fast;
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
