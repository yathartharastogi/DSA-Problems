/*
 * Problem : Divisibility Problem
 * Platform : Codeforces #1328A
 * Difficulty : Easy
 * Topic : Math
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 18/07/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        // If already divisible, 0 moves required
        if (a % b == 0) {
            cout << 0 << "\n";
        } else {
            // Distance to next multiple of b
            cout << b - (a % b) << "\n";
        }
    }
    return 0;
}
