// ﷽
// Contest: Codeforces Round 945 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/1973/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 23 May 2024 09:03:33 PM EEST
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
#define fastio()                                                              \
  ios_base::sync_with_stdio (false);                                          \
  cin.tie (NULL);

#define ll long long
#define all(a) (a).begin (), (a).end ()
#define sz(a) (int)(a).size ()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define OO 1e8
#define endl "\n"

template <typename T>
istream &
operator>> (istream &input, vector<T> &data)
{
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &
operator<< (ostream &output, const vector<T> &data)
{

  for (const T &x : data)
    output << x << " ";
  return output;
}
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
int
findLoneliness (const vector<int> &a, int n)
{
  if (n == 1)
    {
      return 1;
    }

  for (int k = 1; k <= n; ++k)
    {
      unordered_set<int> or_set;
      for (int i = 0; i <= n - k; ++i)
        {
          int or_value = 0;
          for (int j = 0; j < k; ++j)
            {
              or_value |= a[i + j];
            }
          or_set.insert (or_value);
        }
      if (or_set.size () == 1)
        {
          return k;
        }
    }

  return n;
}
void
solve ()
{
  int n;
  cin >> n;
  vector<int> a (n);
  for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }
  cout << findLoneliness (a, n) << endl;
}
int32_t
main ()
{

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio ();
  int t = 1;
  cin >> t;
  while (t--)
    solve ();
  return 0;
}
