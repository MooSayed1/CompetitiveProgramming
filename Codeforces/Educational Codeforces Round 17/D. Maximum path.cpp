// ﷽
// Contest: Codeforces Beta Round 73 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/contest/88/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed 01 May 2024 01:25:32 AM EEST
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
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define OO 2e9
#define endl "\n"

template <typename T>
istream &operator>>(istream &input, vector<T> &data) {
    for (T &x : data) input >> x;
    return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {
    for (const T &x : data) output << x << " ";
    return output;
}

ll maze(int n, int m, vector<vi>& arr, vvll& dp) {
    if (n >= arr.size() || m >= arr[0].size()||n<0||m<0) return LLONG_MIN;
    if (n == arr.size() - 1 && m == arr[0].size() - 1) return arr[n][m];
    if (dp[n][m] != LLONG_MIN) return dp[n][m];
    ll mx=LLONG_MIN;
    if (n + 1 < arr.size()) mx = max(mx, maze(n + 1, m, arr, dp));
    if (m + 1 < arr[0].size()) mx = max(mx, maze(n, m + 1, arr, dp));
    dp[n][m] = arr[n][m] + mx;
    return dp[n][m];
}

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> grid(3, vector<int>(n));
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    vvll dp(3, vector<ll>(n, LLONG_MIN));
    dp[0][0] = grid[0][0];

    for(int j = 0; j < n; ++j) {
        for (int i = 0; i < 3; ++i) {
            if (j + 1 < n) dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + grid[i][j + 1]);
            if (i + 1 < 3) dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + grid[i + 1][j]);
            if (i - 1 >= 0) dp[i - 1][j] = max(dp[i - 1][j], dp[i][j] + grid[i - 1][j]);
            if (j - 1 >= 0) dp[i][j - 1] = max(dp[i][j - 1], dp[i][j] + grid[i][j - 1]);
        }
    }
    cout << dp[2][n-1] << endl;
}
int32_t main() {
    //  freopen("whereami.in", "r", stdin);
    //  freopen("whereami.out", "w", stdout);
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
