/*
 * Problem : Lucky Sum of Digits
 * Platform : Codeforces #109A
 * Difficulty : Hard
 * Topic : Brute Force, Math, Greedy
 *
 * Time Complexity : O(n)
 * Space Complexity : O(1)
 * Submitted on : 15/06/2026
 * Submitted by : Yathartha Rastogi
 */



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int best4 = -1, best7 = -1;
    int minDigits = INT_MAX;

    for (int y = 0; 7 * y <= n; y++) {
        if ((n - 7 * y) % 4 == 0) {
            int x = (n - 7 * y) / 4;

            if (x + y < minDigits) {
                minDigits = x + y;
                best4 = x;
                best7 = y;
            }
        }
    }

    if (best4 == -1) {
        cout << -1;
        return 0;
    }

    cout << string(best4, '4') << string(best7, '7');

    return 0;
}