#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        // For k == 0 we can output 1 staff (or 0 staffs) arbitrarily.
        if(k == 0){
            cout << 1 << "\n";
            cout << 0 << " " << 0 << "\n";
            continue;
        }
        
        // Try to find nonnegative integers nA and nB (with nA+nB <= 500)
        // such that:
        //    binom(nA,2) + binom(nB,2) <= k <= binom(nA,2) + binom(nB,2) + min(nA, nB)
        // and then set r = k - (binom(nA,2) + binom(nB,2)).
        bool found = false;
        int nA_ans = 0, nB_ans = 0, r_ans = 0;
        for (int nA = 0; nA <= 500; nA++){
            for (int nB = 0; nB <= 500 - nA; nB++){
                int pairsA = nA * (nA - 1) / 2;
                int pairsB = nB * (nB - 1) / 2;
                int base = pairsA + pairsB;
                int r = k - base;
                if(r < 0) continue;
                if(r <= min(nA, nB)){
                    // We found a valid construction.
                    nA_ans = nA;
                    nB_ans = nB;
                    r_ans = r;
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        
        // If not found, we may fall back to a one–group solution (which forces k to be triangular).
        // (Note: It can be shown a solution always exists for 0 <= k <= 10^5.)
        if(!found){
            // fallback: choose n such that n(n-1)/2 == k.
            int n = 0;
            while(n * (n - 1) / 2 < k) n++;
            assert(n * (n - 1) / 2 == k);
            nA_ans = n;
            nB_ans = 0;
            r_ans = 0;
        }
        
        int n = nA_ans + nB_ans;
        cout << n << "\n";
        
        // We will use a base offset for y–coordinates to avoid any accidental collisions.
        // Group A: place on x = 0 with y–coordinates 100, 101, ... 100 + nA_ans - 1.
        int baseA = 100;
        vector<int> groupA;
        for (int i = 0; i < nA_ans; i++){
            int y = baseA + i;
            groupA.push_back(y);
            cout << 0 << " " << y << "\n";
        }
        
        // Group B: place on x = 1.
        // For the first r_ans points, choose y–values equal to the first r_ans of group A.
        // For the remaining, choose y–values that do not conflict with group A.
        int baseB = 1000; // choose a number different from baseA range
        for (int i = 0; i < nB_ans; i++){
            int y;
            if(i < r_ans){
                y = baseA + i; // overlap with group A: these yield vertical pairs
            } else {
                y = baseB + i; // no overlap
            }
            cout << 1 << " " << y << "\n";
        }
    }
    
    return 0;
}
