/*
 * Problem : Way Too Long Words
 * Platform : Codeforces #71A
 * Difficulty : Easy
 * Topic : Strings, Implementation
 *
 * Time Complexity  : O(1) per word
 * Space Complexity : O(1) per word
 * Submitted on : 11/06/2026
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

    while (n--) {
        string s;
        cin >> s;

        // Abbreviate words strictly longer than 10 characters
        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s.back() << "\n";
        } else {
            cout << s << "\n";
        }
    }

    return 0;
}
