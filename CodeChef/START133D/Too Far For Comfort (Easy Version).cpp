#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

long long pow_mod(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int countPrefixBalancedArrays(int N, int M) {
    // Calculate the count of prefix-balanced arrays for the first element
    long long prefix_balanced_count = M;
    for (int i = 1; i < N; ++i) {
        prefix_balanced_count = (prefix_balanced_count * (M + 1)) % MOD;
    }

    // Return the count modulo MOD
    return prefix_balanced_count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        cout << countPrefixBalancedArrays(N, M) << endl;
    }

    return 0;
}
