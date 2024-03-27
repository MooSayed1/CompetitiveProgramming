#include <bits/stdc++.h>
#include <debug.hpp>
using namespace std;

namespace Solution1 {

int solve(int n, int t) {
  while (t--) {
    vector<int> arr(n);
    for (int &i : arr)
      cin >> i;

    vector<int> freq(n + 1);
    for (int i = 0; i < n; i++)
      freq[arr[i]]++;

    int mex = 0;
    bool skipOnce = true;
    for (int i = 0; i <= n; i++) {
      if (freq[i] == 0) {
        mex = i;
        break;
      } else if (freq[i] == 1) {
        if (skipOnce)
          skipOnce = false;

        else {
          mex = i;
          break;
        }
      }
    }

    return mex;
  }
  return 0;
}
} // namespace Solution1

namespace Solution2 {

int solve(int n, int t) {
  while (t--) {
    int frq[100005] = {0};
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      frq[x]++;
    }

    for (int i = 0; i <= n; ++i) {
      if (frq[i] == 0) {
        // cout << i << endl;
        return i;
      }
      int x = i;
      while (true && x <= n) {
        if (frq[++x] >= 1) {
          frq[x]--;
          if (frq[x] == 0) {
            cout << x << endl;
            return x;
          }
          i = x;
        }
      }
    }
  }
  return 0;
}
} // namespace Solution2
int main() {
  mt19937 rng(0);
  while (true) {
    int n = rng() % 5 + 1;
    int t = rng() % 7 + 1;
    int a[n], b[n];
    for (auto &it : a)
      it = rng() % 5;
    for (auto &it : b)
      it = rng() % 5;
    int out1 = Solution1::solve(n, t);
    int out2 = Solution2::solve(n, t);
    if (out1 != out2) {
      cout << "Answer Ezz: " << out1 << " Answer Mohamed: " << out2 << endl;
      exit(0);
    }
  }
}
