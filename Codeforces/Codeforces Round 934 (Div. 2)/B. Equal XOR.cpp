// ﷽
// Contest: Codeforces Round 934 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1944/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 16 Mar 2024 05:03:56 PM EET
//
#include <bits/stdc++.h>
#include <unordered_map>
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

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define endl "\n"

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  int freqa[n + 1] = {};
  for (auto &i : a) {
    cin >> i;
    freqa[i]++;
  }
  for (auto &i : b) {
    cin >> i;
  }
  deque<int> ans, bns;
  int sn = 0;
  for (int i = 1; i <= n; i++) {
    switch (freqa[i]) {
    case 0:
      bns.push_back(i);
      bns.push_back(i);
      break;
    case 1:
      ans.push_front(i);
      bns.push_front(i);
      sn++;
      break;
    case 2:
      ans.push_back(i);
      ans.push_back(i);
      break;
    }
  }
  if (sn & 1) {
    ans.pop_front();
    bns.pop_front();
  }

  for (int i = 0; i < 2 * k; i++) {
    cout << ans[i] << " ";
  }
  cout << "\n";
  for (int i = 0; i < 2 * k; i++) {
    cout << bns[i] << " ";
  }
  cout << "\n";
}
// void solve() {
//   int n, k;
//   cin >> n >> k;
//   vi arr(n);
//   vi arr2(n);
//   vi frq(n + 1);
//   int cntTwise = 0;
//   for (int i = 0; i < n; ++i) {
//     cin >> arr[i];
//     frq[arr[i]]++;
//   }
//   debug(frq);
//   for (int i = 1; i <= n; ++i) {
//     if (frq[i] == 2)
//       cntTwise++;
//   }
//   vi store;
//   vi store2;
//   debug(cntTwise);
//   cin >> arr2;
//   if (!cntTwise) {
//     for (int i = 0; i < k * 2; ++i)
//       cout << arr[i] << " ";
//     cout << "\n";
//     for (int i = 0; i < k * 2; ++i)
//       cout << arr[i] << " ";
//     cout << "\n";
//     return;
//   } else {
//     int temp = k;
//     for (int i = 1; temp; ++i) {
//       if (frq[i] == 2) {
//         store.push_back(i);
//         store.push_back(i);
//         temp--;
//       }
//       for (int i = 0; temp; ++i) {
//         if (frq[i] == 1) {
//           store.push_back(i);
//           temp--;
//         }
//       }
//       for (int i = 1; k; ++i) {
//         if (frq[i] == 0) {
//           store2.push_back(i);
//           store2.push_back(i);
//           --k;
//         }
//       }
//       debug(k);
//       for (int i = 0; k; ++i) {
//         if (frq[i] == 1) {
//           store2.push_back(i);
//           k--;
//         }
//       }
//     }
//   }
//   cout << store << endl;
//   cout << store2 << endl;
// }

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
