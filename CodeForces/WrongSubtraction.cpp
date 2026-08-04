/*
 * Problem : Wrong Subtraction
 * Platform : Codeforces #977A
 * Difficulty : Easy
 * Topic : Implementation
 *
 * Time Complexity  : O(k)
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

    int n, k;
    cin >> n >> k;

    // Perform k subtraction steps according to Tanya's algorithm
    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }

    cout << n << "\n";
    return 0;
}
