/*
 * Problem : George and Accommodation
 * Platform : Codeforces #467A
 * Difficulty : Easy
 * Topic : Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 17/06/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;

    // Count rooms with at least 2 free spaces (capacity q - occupied p >= 2)
    while (n--) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}
