/*
 * Problem : Football
 * Platform : Codeforces #96A
 * Difficulty : Easy
 * Topic : Strings, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 19/06/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int consecutive = 1;
    bool dangerous = false;

    // Check for 7 consecutive identical players ('0' or '1')
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            consecutive++;
            if (consecutive >= 7) {
                dangerous = true;
                break;
            }
        } else {
            consecutive = 1;
        }
    }

    if (dangerous) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
