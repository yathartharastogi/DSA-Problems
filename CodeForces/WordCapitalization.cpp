/*
 * Problem : Word Capitalization
 * Platform : Codeforces #281A
 * Difficulty : Easy
 * Topic : Strings, Implementation
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 12/06/2026
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

    // Capitalize first character of string
    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }

    cout << s << "\n";
    return 0;
}
