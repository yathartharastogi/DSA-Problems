/*
 * Problem : Word
 * Platform : Codeforces #59A
 * Difficulty : Easy
 * Topic : Strings, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 * Submitted on : 14/06/2026
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

    int upper = 0;
    int lower = 0;

    // Count uppercase vs lowercase characters
    for (char c : s) {
        if (isupper(c)) {
            upper++;
        } else {
            lower++;
        }
    }

    // Convert to majority case (lowercase on tie)
    if (upper > lower) {
        for (char &c : s) {
            c = toupper(c);
        }
    } else {
        for (char &c : s) {
            c = tolower(c);
        }
    }

    cout << s << "\n";
    return 0;
}
