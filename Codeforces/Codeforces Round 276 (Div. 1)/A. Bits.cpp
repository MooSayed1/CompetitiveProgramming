#include<iostream>
using namespace std;
#define fast                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define ll long long

ll l, r, i, t;

int32_t main() {
  fast
  for (std::cin >> t; t--;std::cout << l << '\n')
    for (std::cin >> l >> r, i = 1; (l | i) <= r; l |= i, i <<= 1)
      ;

  return 0;
}

