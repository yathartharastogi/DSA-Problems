/*
 * Problem : Team
 * Platform : Codeforces #231A
 * Difficulty : Easy
 * Topic : Implementation, Brute Force
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

    int count = 0;

    // Count problems where at least 2 friends are sure about the solution
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}
