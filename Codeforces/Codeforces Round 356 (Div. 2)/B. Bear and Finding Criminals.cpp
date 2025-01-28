// ﷽
// Contest: Codeforces Round 356 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/680/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 26 Dec 2023 01:34:59 PM EET
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

void solve() {
		int distance, numOFcity, pos, sum = 0;
	cin >> numOFcity >> pos;
 
	vector<int> arr(numOFcity + 1);
 
	for (distance = 1;distance <= numOFcity;distance++)
	{
		cin >> arr[distance];
		sum += arr[distance];
	}
 
	for (distance = 1; distance<pos && distance <= numOFcity - pos ;distance++)
	{
		if (arr[pos + distance] + arr[pos - distance] == 1)
			sum--;
	}
	cout << sum;
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
