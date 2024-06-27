#include <iostream>
#include <vector>

using namespace std;

long long reduce_by_y(long long x, long long y) {
    while (x % y == 0) {
        x /= y;
    }
    return x;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        for (long long i = 0; i < k; ++i) {
            x = reduce_by_y(x + 1, y);
        }

        cout << x << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
