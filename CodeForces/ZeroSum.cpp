/*
 * Problem : Zero Sum
 * Platform : Codeforces Context 1090
 * Difficulty : Easy
 * Topic : Math, Array
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 11/06/2026
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
        int n, x, sum = 0;
        cin >> n;

        // Read elements and calculate total sum
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }

        // Output YES if n is even and sum is divisible by 4
        if (n % 2 == 0 && sum % 4 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
