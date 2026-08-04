/*
 * Problem : Lucky Sum of Digits
 * Platform : Codeforces #109A
 * Difficulty : Medium
 * Topic : Math, Greedy
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 15/06/2026
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

    int sevens = 0;
    int fours = 0;

    // Greedy search for maximum count of 7s to minimize number length
    while (n >= 0) {
        if (n % 7 == 0) {
            sevens = n / 7;
            n = 0;
            break;
        }

        n -= 4;
        fours++;
    }

    // If sum condition was satisfied
    if (n == 0) {
        for (int i = 0; i < fours; i++) cout << 4;
        for (int i = 0; i < sevens; i++) cout << 7;
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }

    return 0;
}
