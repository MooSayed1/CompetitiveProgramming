// ﷽
// Contest: Codeforces Beta Round 37
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/37/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sun 31 Dec 2023 12:02:53 AM EET
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
    int n;
    std::cin >> n;

    // إنشاء مجموعة لتخزين أطوال الأخشاب المختلفة
    std::unordered_set<int> uniqueLengths;

    // قراءة أطوال الأخشاب وتخزينها في المجموعة
    for (int i = 0; i < n; ++i) {
        int length;
        std::cin >> length;
        uniqueLengths.insert(length);
    }

    // حساب ارتفاع البرج الأعلى
    int maxHeight = 0;

    // احتساب عدد الأبراج المختلفة
    int numberOfTowers = uniqueLengths.size();

    // البرنامج يحتاج إلى عدد الأبراج إذا كانت الطول المتاحة أكثر من قطعة واحدة
    if (numberOfTowers > 1) {
        maxHeight = 1;
    }

    // طباعة ارتفاع البرج الأعلى وعدد الأبراج
    std::cout << maxHeight << " " << numberOfTowers << std::endl;
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  //cin>>t;
  while (t--)
    solve();  
  return 0;
}
