/*
 * Problem : Translation
 * Platform : Codeforces #41A
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

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    // Reverse second string to compare against first
    reverse(s.begin(), s.end());

    if (s == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
