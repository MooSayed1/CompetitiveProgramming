// ﷽
// Contest: CSES Problem Set
// Judge: CSES
// URL: https://cses.fi/problemset/task/1193/
// Memory Limit: 512
// Time Limit: 1000
// Start: Tue 13 May 2025 10:53:37 PM EEST
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
// R  D  L  U
const int dx[]{0, 1, 0, -1};
const int dy[]{1, 0, -1, 0};

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

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> arr(n, vector<char>(m));
  pair<int, int> start;
  pair<int, int> end;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> arr[i][j];
      if (arr[i][j] == 'A')
        start.first = i, start.second = j;
      if (arr[i][j] == 'B')
        end.first = i, end.second = j;
    }
  }

  queue<pair<int, int>> q;
  vector<vector<int>> dist(n, vector<int>(m, 0));
  vector<vector<pair<int, int>>> p(n, vector<pair<int, int>>(m, {-1, -1}));
  string path;
  q.push(start);

  bool f = 0;
  while (!q.empty()) {
    pair<int, int> cur = q.front();
    q.pop();
    for (int i = 0; i < 4; ++i) {
      int ni = cur.first + dx[i];
      int nj = cur.second + dy[i];
      pair<int, int> np = {ni, nj};
      if (ni < 0 || ni > n - 1 || nj < 0 || nj > m - 1 || arr[ni][nj] == '#' ||
          dist[ni][nj])
        continue;
      dist[ni][nj] = dist[cur.first][cur.second] + 1;
      p[ni][nj] = cur;
      q.push(np);
      if (np == end) {
        f = 1, cout << "YES\n" << dist[np.first][np.second] << endl;
        break;
      }
    }
  }

  if (f) {
    pair<int, int> d = end;
    while (d != start) {
      int x = d.first - p[d.first][d.second].first;
      int y = d.second - p[d.first][d.second].second;
      if (x < 0)
        path.push_back('U');
      else if (x > 0)
        path.push_back('D');
      if (y > 0)
        path.push_back('R');
      if (y < 0)
        path.push_back('L');
      d = p[d.first][d.second];
    }
    reverse(all(path));
    cout << path << endl;
  } else {
    cout << "NO\n";
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
