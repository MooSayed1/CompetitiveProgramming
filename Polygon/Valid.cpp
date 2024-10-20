#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

#include "testlib.h"
#define endl "\n"
#define all(v) v.begin(), v.end()
#define rt(s) return cout << s, 0
#define sz(s) (int)(s.size())
#define OO 0x3f3f3f3f3f3f3f3fLL
#define oo 0x3f3f3f3f
using namespace std;
typedef long long ll;
int dx[]{-1, 0, 0, 1, 1, 1, -1, -1};
int dy[]{0, -1, 1, 0, 1, -1, 1, -1};
int main(int argc, char* argv[]) {
  registerValidation(argc, argv);
  int n = inf.readInt(1, 2e5, "n");
  inf.readSpace();
  int k = inf.readInt(1, n, "k");
  inf.readEoln();
  ensuref(n >= k, "INVALID INPUT");
  while (k--) {
    int l = inf.readInt(1, n, "l");
    inf.readSpace();
    int r = inf.readInt(1, n, "r");
    if(l>r){swap(l,r);}
    ensuref(l <= r && r <= n, "INVALID INPUT L,R");
    inf.readEoln();
  }

  // inf.readEoln();
  inf.readEof();
  // inf.readEoln();
  // inf.readInts(n, -100, 100, "elements");
  // inf.readSpace();
  // int readChar();
  // inf.readWord(string regex);
  // inf.readLong()
  // inf.readEoln();
  // inf.readEof();
}
