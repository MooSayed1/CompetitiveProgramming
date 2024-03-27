// ﷽
// Contest: Codeforces Round 918 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1915/problem/0
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 28 Dec 2023 05:29:02 PM EET
//
#include <bits/stdc++.h>
using namespace std;
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back

int findUniqueDigit(int a, int b, int c) {
  return a + b + c - 2 * ((a == b) ? a : ((a == c) ? a : b));
}

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int a, b, c;
    std::cin >> a >> b >> c;

    int result = findUniqueDigit(a, b, c);
    std::cout << result << std::endl;
  }

  return 0;
}
