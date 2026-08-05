/*
 * Problem : FizzBuzz Remixed
 * Platform : Codeforces #2070A
 * Difficulty : Easy
 * Topic : Math, Number Theory
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 04/08/2026
 * Submitted by : Yathartha Rastogi
 */

#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Each full cycle of 15 contains 3 matching numbers (0, 1, 2 mod 15)
        long long ans = (n / 15) * 3;
        // Add remaining matches in incomplete last cycle
        ans += min(3LL, n % 15 + 1);

        cout << ans << '\n';
    }

    return 0;
}
