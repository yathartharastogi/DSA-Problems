/*
 * Problem : Iskander and Drawings
 * Platform : Codeforces Context 1090
 * Difficulty : Easy
 * Topic : Strings, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = 0;
        int count = 0;

        // Count continuous '#' blocks and calculate maximum drawings needed
        for (char c : s) {
            if (c == '#') {
                count++;
            } else {
                result = max(result, (count + 1) / 2);
                count = 0;
            }
        }

        // Account for trailing '#' block
        result = max(result, (count + 1) / 2);

        cout << result << "\n";
    }

    return 0;
}
