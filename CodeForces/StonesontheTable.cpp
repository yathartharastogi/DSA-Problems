/*
 * Problem : Stones on the Table
 * Platform : Codeforces #266A
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

    int n;
    cin >> n;

    string s;
    cin >> s;

    int removals = 0;

    // Count adjacent identical stones to calculate required removals
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            removals++;
        }
    }

    cout << removals << "\n";
    return 0;
}
