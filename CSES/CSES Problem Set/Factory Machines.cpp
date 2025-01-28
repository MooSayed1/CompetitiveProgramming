// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1620
// Memory Limit: 512
// Time Limit: 1000
// Start: Tue 13 Aug 2024 12:50:46 AM EEST
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

void solve(vi& perm, int st) {
  if (st == perm.size() - 1) {
    for (int num : perm) {
      cout << num << " ";
    }
    cout << endl;
    return;
  }

  for (int i = st; i < perm.size(); ++i) {
    if (i != st && perm[i] == perm[st]) continue; 
    swap(perm[st], perm[i]);
    solve(perm, st + 1);
    swap(perm[st], perm[i]);
  }
}

int32_t main() {
  fastio(); 
  int n;
  cin >> n;

  vi perm(n);
  cin >> perm;
  sort(all(perm)); 

  solve(perm, 0); 

  return 0;
}
