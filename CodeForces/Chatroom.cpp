/*
 * Problem : Chat room
 * Platform : Codeforces #58A
 * Difficulty : Easy
 * Topic : Strings, Greedy
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 15/07/2026
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

    string target = "hello";
    int j = 0;

    // Greedy subsequence matching for target "hello"
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == target[j]) {
            j++;
        }
        if (j == 5) break;
    }

    if (j == 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
