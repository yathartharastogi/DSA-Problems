/*
 * Problem : Bit++
 * Platform : Codeforces #282A
 * Difficulty : Easy
 * Topic : Implementation, String
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

    int x = 0;

    // Execute Bit++ statement operations
    while (n--) {
        string s;
        cin >> s;

        // Check if statement contains '+' or '-'
        if (s.find('+') != string::npos) {
            x++;
        } else {
            x--;
        }
    }

    cout << x << "\n";
    return 0;
}
