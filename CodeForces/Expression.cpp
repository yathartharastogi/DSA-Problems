/*
 * Problem : Expression
 * Platform : Codeforces #479A
 * Difficulty : Easy
 * Topic : Math, Brute Force
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 22/07/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    // Evaluate all parenthesizations & operations to find maximum
    cout << max({
        a * b * c,
        (a + b) * c,
        a * (b + c),
        a + b * c,
        a * b + c,
        a + b + c
    }) << "\n";

    return 0;
}
