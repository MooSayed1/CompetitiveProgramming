// ﷽
// Contest: IEEEXtreme 18.0
// Judge: CS Academy
// URL: https://csacademy.com/ieeextreme18/task/corporation
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 26 Oct 2024 09:30:02 PM EEST
//
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
namespace __gnu_pbds{
    typedef tree<long long,
            null_type,
            less<long long>,
    rb_tree_tag,
    tree_order_statistics_node_update> ordered_set; 
}
using namespace __gnu_pbds;
#ifdef MOHAMED
#include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define f(i, a, b) for (int i = a; i < b; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define pii pair<int,int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1};
const int dy[]{1, 0, -1, 0, -1, 1, -1, 1};

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

string simplifyFraction(int num, int den) {
    if (den == 0) return "Undefined"; 
    if (num == 0) return "0/1"; 
    int divisor = gcd(abs(num), abs(den));
    num /= divisor;
    den /= divisor;
    if (den < 0) {
        num = -num;
        den = -den;
    }
    return to_string(num) + "/" + to_string(den);
}

void solve() {
    int N, Q;
    cin >> N >> Q;
    
    vector<int> salaries(N);
    vector<int> happiness(N, 0); 

    for (int i = 0; i < N; ++i) {
        cin >> salaries[i];
    }

    for (int i = 0; i < Q; ++i) {
        int eventType;
        cin >> eventType;

        if (eventType == 0) { 
            int l, r, c;
            cin >> l >> r >> c;
            l--; r--; 
            for (int j = l; j <= r; ++j) {
                if (salaries[j] < c) {
                    happiness[j] += 1; 
                } else if (salaries[j] > c) {
                    happiness[j] -= 1; 
                }
                salaries[j] = c; 
            }
        } else if (eventType == 1) { 
            int l, r, c;
            cin >> l >> r >> c;
            l--; r--; 
            for (int j = l; j <= r; ++j) {
                if (salaries[j] + c > salaries[j]) {
                    happiness[j] += 1; 
                } else if (salaries[j] + c < salaries[j]) {
                    happiness[j] -= 1;
                }
                salaries[j] += c; 
            }
        } else if (eventType == 2) { 
            int l, r;
            cin >> l >> r;
            l--; r--; 
            int totalSalary = accumulate(salaries.begin() + l, salaries.begin() + r + 1, 0);
            int count = r - l + 1;
            cout << simplifyFraction(totalSalary, count) << endl;
        } else if (eventType == 3) { 
            int l, r;
            cin >> l >> r;
            l--; r--; 
            int totalHappiness = accumulate(happiness.begin() + l, happiness.begin() + r + 1, 0);
            int count = r - l + 1;
            cout << simplifyFraction(totalHappiness, count) << endl;
        }
  }
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
