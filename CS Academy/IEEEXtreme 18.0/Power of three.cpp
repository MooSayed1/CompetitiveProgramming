// ﷽
// Contest: IEEEXtreme 18.0
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/kings-order/
// Memory Limit: 256
// Time Limit: 500
// Start: Sat 26 Oct 2024 07:40:56 PM EEST
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

void solve() {
  int n, m;
  cin >> n >> m;
  vi groupIds(n);
  cin >> groupIds;

  vector<vector<int>> adjList(n + 1);
  vi inDegree(n + 1, 0);
  
  f(i, 0, m) {
    int a, b;
    cin >> a >> b;
    adjList[a].pb(b);
    inDegree[b]++;
  }

  priority_queue<pii, vector<pii>, greater<pii>> minHeap;
  f(i, 1, n + 1) {
    if (inDegree[i] == 0) {
      minHeap.push({groupIds[i - 1], i});
    }
  }

  vi result;
  int processedCount = 0;
  
  while (!minHeap.empty()) {
    auto [groupId, projectId] = minHeap.top();
    minHeap.pop();
    result.pb(projectId);
    processedCount++;
    
    for (int neighbor : adjList[projectId]) {
      inDegree[neighbor]--;
      if (inDegree[neighbor] == 0) {
        minHeap.push({groupIds[neighbor - 1], neighbor});
      }
    }
  }

  if (processedCount != n) {
    cout << -1 << endl;
  } else {
    cout << result << endl;
  }
}

int32_t main() {
  fastio();
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
  return 0;
}
