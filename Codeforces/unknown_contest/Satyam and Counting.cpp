// ﷽
// Contest: unknown_contest
// Judge: Codeforces
// URL: https://m2.codeforces.com/contest/2009/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 03 Sep 2024 06:43:00 PM EEST
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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
  int n;
  cin >> n;
  vi a, b;
  set<int> as, bs;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (y == 0)
      a.push_back(x), as.emplace(x);
    else
      b.push_back(x), bs.emplace(x);
  }
  sort(all(a)); sort(all(b));

  int ans = 0;

  for (int i = 0; i < a.size(); i++) {
    auto it = bs.find(a[i]);
    if (it == bs.end())
      continue;

    int next = a.size() - 1 + b.size() - 1;
    ans += next;
  }

  for (int i = 0; i < a.size(); i++) {
    if (as.find(a[i] + 2) != as.end() && bs.find(a[i] + 1) != bs.end()) ans++;
  }

  for (int i = 0; i < b.size(); i++) {
    if (bs.find(b[i] + 2) != bs.end() && as.find(b[i] + 1) != as.end()) ans++;
  }

  cout << ans << "\n";
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
