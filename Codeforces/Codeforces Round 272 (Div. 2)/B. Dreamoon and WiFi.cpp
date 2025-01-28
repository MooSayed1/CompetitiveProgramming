// ﷽
// Contest: Codeforces Round 272 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/476/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat 18 May 2024 12:10:28 PM EEST
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define ll long long
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vll vector<ll>
#define vi vector<int>
#define OO 1e8
#define endl "\n"

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
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z

void solve() {
    long double k=0, p=0;
    string s1, s2;
    cin>>s1>>s2;
    int x = 0;
    for(auto i: s1){
        if(i == '+') x++;
        else x--;
    }
    int n=0;
    for(int i=0; i<s2.size(); ++i){
        if(s2[i] == '?') n++;
    }
    for(int i=0; i<(1<<n); ++i){
        int x1 = 0;
        string ss;
        for(int j=0; j<n; ++j){
            ss += (char)(((i >> j) & 1) + '0');
        }
        int e = 0;
        for(int j=0; j<s2.size(); ++j){
            if(s2[j] == '+') x1++;
            else if(s2[j] == '-')x1--;
            else{
                if(ss[e] == '1') x1++;
                else x1--;
                e++;
            }
        }
 
        if(x1 == x) k++, p++;
        else k++;
    }
 
    cout<<fixed<<setprecision(12)<<p/k;
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
