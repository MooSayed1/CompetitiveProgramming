#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#include "testlib.h"
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
#define OO 1e4
#define endl "\n"

int dx[]{-1, 0, 0, 1, 1, 1, -1, -1};
int dy[]{0, -1, 1, 0, 1, -1, 1, -1};
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
int main(int argc, char *argv[]) {
  registerTestlibCmd(argc, argv);
  // inf - for the input
  // ouf - for the contestant output
  // ans - for the solution output
  // quitf(_ok, "The answer is correct.");
  // quitf(_wa, "The answer is wrong: expected = %d, found = %d", jans, pans);
  // ensuref(bool condition, const char* message)
}
