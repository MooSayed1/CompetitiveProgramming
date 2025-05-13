// ﷽
// Contest: Codeforces Round 149 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/242/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 13 May 2025 03:34:23 AM EEST
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
#define pii pair<int, int>
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

struct pair_hash {
  size_t operator()(const pair<int, int> &p) const {
    return hash<long long>()(((long long)p.first << 32) | p.second);
  }
};

void solve() {
  pii start, end;
  cin >> start.first >> start.second >> end.first >> end.second;
  int n;
  cin >> n;
  unordered_set<pii, pair_hash> alw;
  for (int i = 0; i < n; i++) {
    int r, a, b;
    cin >> r >> a >> b;
    for (int o = a; o <= b; ++o) {
      alw.insert({r, o});
    }
  }

  pii cur;
  queue<pair<int, int>> q;
  q.push(start);
  unordered_map<pii,int, pair_hash> dist;

  while (!q.empty()) {
    cur = q.front();
    q.pop();

    for (int i = 0; i < 8; ++i) {
      int ni = cur.first + dx[i];
      int nj = cur.second + dy[i];
      pair<int,int> np = {ni,nj};
      if (alw.count(np)&&!dist[np]) {
        q.push(np);
        dist[np]=dist[cur]+1;
      }
      if(np==end){
        return void(cout<<dist[np]);
      }
    }
  }
  cout<<-1<<endl;
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
