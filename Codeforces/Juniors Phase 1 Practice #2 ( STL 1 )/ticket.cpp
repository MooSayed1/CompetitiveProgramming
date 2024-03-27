#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<string> arr(n);
  for (auto &it : arr)
    cin >> it;
  int len = arr.size() - 1;
  int l = 0, r = len;
  while (l < r) {
    if (arr[l] != arr[r].substr(3)) {
      cout << "WA";
      return;
    }
    ++l;
    --r;
  }
  cout << "ACC";
}
int main() {
  int t = 1;
  // cin>>t;
  while (t--)
    solve();

  return 0;
}
