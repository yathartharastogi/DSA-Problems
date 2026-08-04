/*
 * Problem : Nearly Lucky Number
 * Platform : Codeforces #110A
 * Difficulty : Easy
 * Topic : Implementation
 *
 * Time Complexity  : O(log10 n)
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

    long long n;
    cin >> n;

    int luckyCount = 0;

    // Count occurrences of lucky digits ('4' and '7')
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            luckyCount++;
        }
        n /= 10;
    }

    // Check if the total lucky digit count is itself a lucky number (4 or 7)
    if (luckyCount == 4 || luckyCount == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
