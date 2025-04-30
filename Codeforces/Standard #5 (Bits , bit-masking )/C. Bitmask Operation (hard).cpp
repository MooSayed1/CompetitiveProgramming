// ﷽
// Contest: Standard #5 (Bits , bit-masking )
// Judge: Codeforces
// URL: https://codeforces.com/group/c3FDl9EUi9/contest/267312/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 15 Mar 2025 09:38:13 PM EET
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

#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;

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

bool getBit(int x, int inx) { return (x >> inx) & 1; }
int setBit(int x, int inx) { return x | (1 << inx); }

int resetBit(int x, int inx) { return x & (~(1 << inx)); }

int turnOnLastZero(int S) { return S | (S + 1); }

int turnOffLastBit(int S) { return S & (S - 1); }

int turnOnLastConsecutiveZeroes(int S) { return S | (S - 1); }

int turnOffLastConsecutiveBits(int S) { return S & (S + 1); }

bool isPowerOfTwo(int x){
  if(x<=0){return false;}
  return !((x&x-1));
}

void solve() {
  int n, q;
  cin >> n >> q;

  while (q--) {
    int a;
    cin >> a;

    if (a == 1) {
      n = turnOnLastZero(n);
      cout << n << endl;
    } else if (a == 2) {
      n = turnOffLastBit(n);
      cout << n << endl;
    } else if (a == 3) {
      n = turnOnLastConsecutiveZeroes(n);

      cout << n << endl;
    } else if (a == 4) {
      n = turnOffLastConsecutiveBits(n);
      cout << n << endl;
    } else {
      if (isPowerOfTwo(n)) {
        cout << "is power of two" << endl;
      } else
        cout << "not power of two" << endl;
    }
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
