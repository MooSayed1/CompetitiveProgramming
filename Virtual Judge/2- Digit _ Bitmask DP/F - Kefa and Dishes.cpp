#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// A large negative value to represent "impossible" states.
const ll NEG_INF = -1e18;
 
// Structure to store each person’s data.
struct Person {
    ll a;               // audience strength
    vector<ll> s;       // playing strengths for each of the p positions
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, p, k;
    cin >> n >> p >> k;
    
    // Read people data.
    vector<Person> persons(n);
    for (int i = 0; i < n; i++){
        cin >> persons[i].a;
    }
    for (int i = 0; i < n; i++){
        persons[i].s.resize(p);
        for (int j = 0; j < p; j++){
            cin >> persons[i].s[j];
        }
    }
    
    // Sort persons in descending order by their audience strength.
    sort(persons.begin(), persons.end(), [](const Person &A, const Person &B) {
        return A.a > B.a;
    });
    
    int totalStates = 1 << p; // There are 2^p possible ways to fill p positions.
    
    // dp[i][mask] = maximum total strength after considering the first i persons,
    // with the set of players (positions filled) given by 'mask'.
    // (i - popcount(mask)) is then the number of persons already selected as audience.
    vector<vector<ll>> dp(n + 1, vector<ll>(totalStates, NEG_INF));
    dp[0][0] = 0;
    
    for (int i = 0; i < n; i++){
        for (int mask = 0; mask < totalStates; mask++){
            // If state is unreachable, skip it.
            if (dp[i][mask] == NEG_INF) continue;
 
            // Number of persons chosen as audience so far
            int cnt = i - __builtin_popcount(mask);
 
            // Option 1: Skip person i (do not choose him at all).
            dp[i + 1][mask] = max(dp[i + 1][mask], dp[i][mask]);
 
            // Option 2: Choose person i as an audience member (if we still need audience).
            if (cnt < k)
                dp[i + 1][mask] = max(dp[i + 1][mask], dp[i][mask] + persons[i].a);
 
            // Option 3: Try to assign person i to any position that is still free.
            for (int pos = 0; pos < p; pos++){
                if (!(mask & (1 << pos))) {
                    int newMask = mask | (1 << pos);
                    dp[i + 1][newMask] = max(dp[i + 1][newMask], dp[i][mask] + persons[i].s[pos]);
                }
            }
        }
    }
 
    // The answer is the maximum total strength when all n persons have been processed
    // and all p positions have been filled.
    cout << dp[n][totalStates - 1] << "\n";
 
    return 0;
}
