#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  switch (n) {
  case 0:
  case 1:
  case 8:
    ans = 10;
    break;
  case 2:
  case 7:
  case 6:
    ans = 2;
    break;
  case 9:
    ans = 0;
    break;
  case 5:
  case 3:
  case 4:
    ans = 7;
    break;
  case 10:
  case 11:
  case 12:
    ans = 0;
    break;
  }

  cout << ans << endl;

  return 0;
}
