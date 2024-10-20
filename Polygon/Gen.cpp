#define _CRT_SECURE_NO_WARNINGS
#include "testlib.h"
#include <bits/stdc++.h>
#define endl "\n"
#define all(v) v.begin(),v.end()
#define rt(s) return cout<<s,0
#define sz(s)	(int)(s.size())
#define OO 0x3f3f3f3f3f3f3f3fLL
#define oo 0x3f3f3f3f
using namespace std;
typedef long long ll;
int dx[] { -1, 0, 0, 1, 1, 1, -1, -1 };
int dy[] { 0, -1, 1, 0, 1, -1, 1, -1 };
int main(int argc, char *argv[]) {
	registerGen(argc, argv, 1);
	// atoi(argv[1]);
	// rnd.next(l, r), or it can take regex like: "[a-zA-z0-9]{1,10}"
  int n = rnd.next(1,200000);
  cout<<n<<' ';
  int k = rnd.next(1,n);
  cout << k << endl;
  while(k--){
    int l=rnd.next(1,n),r=rnd.next(1,n);
    if(l>r)swap(l,r);
    cout << l << ' ' << r << endl;
  }
}
