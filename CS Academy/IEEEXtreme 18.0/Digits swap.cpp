// ﷽
// Contest: IEEEXtreme 18.0
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/this-is-not-an-optimization-problem/
// Memory Limit: 512
// Time Limit: 1000
// Start: Sat 26 Oct 2024 10:04:04 PM EEST
//
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
namespace __gnu_pbds{
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
  string s; cin >> s;
  int k; cin >> k;
  //reverse(all(s));
  int length = s.length();

    for (int i = 0; i < length && k >= 0; ++i) {
        // Find the maximum digit that can be swapped with N[i]
        char maxDigit = s[i];
        int maxIndex = i;

        for (int j = i + 1; j < length; ++j) {
            // Update maxDigit if a larger digit is found
            if (s[j] > maxDigit) {
                maxDigit = s[j];
                maxIndex = j;
            }
        }

        // If the maximum digit is the same as the current digit, continue
        if (maxIndex == i) {
            continue;
        }

        // Perform the swap only if it doesn't lead to a leading zero
        if (i == 0 && maxDigit == '0') {
            continue;  // Skip if it would lead to a leading zero
        }

        // Swap the current digit with the found maximum digit
        swap(s[i], s[maxIndex]);
        k--;  // Decrease the number of allowed swaps
    }
  cout << s << endl;
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
