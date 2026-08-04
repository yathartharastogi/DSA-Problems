/*
 * Problem : String Task
 * Platform : Codeforces #118A
 * Difficulty : Easy
 * Topic : Strings, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i');
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string result = "";

    // Delete all vowels, insert '.' before each remaining consonant and lowercase it
    for (char c : s) {
        if (!isVowel(c)) {
            result += '.';
            result += tolower(c);
        }
    }

    cout << result << "\n";
    return 0;
}
