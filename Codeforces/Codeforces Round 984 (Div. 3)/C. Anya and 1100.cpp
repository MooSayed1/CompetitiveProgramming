// ﷽
// Contest: Codeforces Round 984 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2036/problem/C
// Memory Limit: 256
// Time Limit: 3000
// Start: Sat 02 Nov 2024 05:03:00 PM EET
//
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
namespace __gnu_pbds {
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

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
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
template <typename T> ostream &operator<<(ostream &output, const vector<T> &data) {
  for (const T &x : data)
  output << x << " ";
  return output;
}

void solve() {
  string s;
  int q;
  cin >> s >> q;
  int n = s.size();

  if (n < 4) {
    while (q--) {
      int i, v;
      cin >> i >> v;
      no;
    }
    return;
  }

  set<int> pos;
  for (int i = 0; i <= n - 4; i++) {
    if (s.substr(i, 4) == "1100") {
      pos.insert(i);
    }
  }

  while (q--) {
    int i;
    char v;
    cin >> i >> v;
    i--;
    s[i] = v ;

    for (int j = max(0LL, i - 3); j <= min(n - 4, i); j++) {
      string sub = s.substr(j, 4);
      if (pos.count(j) && sub != "1100") {
        pos.erase(j);
      }
      if (!pos.count(j) && sub == "1100") {
        pos.insert(j);
      }
    }

    if (!pos.empty()) {
      yes;
    } else {
      no;
    }
  }
}

int32_t main() {
  fastio();
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
