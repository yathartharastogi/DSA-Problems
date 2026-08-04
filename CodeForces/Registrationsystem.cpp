/*
 * Problem : Registration System
 * Platform : Codeforces #4C
 * Difficulty : Medium
 * Topic : Hash Table, String, Data Structures
 *
 * Time Complexity  : O(n * len)
 * Space Complexity : O(n * len)
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

    // Track existing usernames and their prompt counts
    map<string, int> mp;

    while (n--) {
        string s;
        cin >> s;

        // Output OK if unique, otherwise append prompt counter number
        if (mp[s] == 0) {
            cout << "OK\n";
        } else {
            cout << s << mp[s] << '\n';
        }

        mp[s]++;
    }

    return 0;
}
