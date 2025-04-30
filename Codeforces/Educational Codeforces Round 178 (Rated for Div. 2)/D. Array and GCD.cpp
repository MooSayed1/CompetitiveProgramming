// ﷽
// Contest: Educational Codeforces Round 178 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2104/problem/D
// Memory Limit: 512
// Time Limit: 2000
// Start: Mon 28 Apr 2025 06:42:00 PM EEST
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

const int MAXP = 400000 + 5;
const int MAX = 7e6 + 5;

vi prms;

void sieve() {
  vector<bool> is_prime(MAX + 1, 1);
  is_prime[0] = is_prime[1] = 0;

  for (int i = 2; i * i <= MAX; ++i) {
    if (is_prime[i]) {
      for (int j = i * i; j <= MAX; j += i) {
        is_prime[j] = false;
      }
    }
  }

  for (int i = 2; i <= MAX; ++i) {
    if (is_prime[i]) {
      prms.push_back(i);
    }
  }
}

vi prefPrm;
void solve() {
  int n;
  cin >> n;
  vi arr(n);
  cin >> arr;

  sort(all(arr), greater<int>());

  vi pref(n + 1, 0);
  for (int i = 1; i <= n; i++)
    pref[i] = pref[i - 1] + arr[i - 1];



  int ans = 0;
  for (int k = 1; k <= n; k++) {
    if (pref[k] >= prefPrm[k])
      ans = k;
    else
      break;
  }
  cout << (n - ans) << '\n';
}

int32_t main() {
  fastio();
  sieve();
  prefPrm.assign(MAXP+5, 0);
  for(int i=0;i<10;++i){
    prms.push_back(0);
  }

  for (int i = 1; i < MAXP; i++)
    prefPrm[i] = prefPrm[i-1] +  prms[i - 1];

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
