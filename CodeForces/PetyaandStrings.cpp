/*
 * Problem : Petya and Strings
 * Platform : Codeforces #112A
 * Difficulty : Easy
 * Topic : Strings, Implementation
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

    string s1, s2;
    cin >> s1 >> s2;

    // Case-insensitive lexicographical comparison
    for (size_t i = 0; i < s1.length(); i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1 < c2) {
            cout << -1 << "\n";
            return 0;
        }
        if (c1 > c2) {
            cout << 1 << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";
    return 0;
}
