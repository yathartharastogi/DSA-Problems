/*
 * Problem : Cheap Travel
 * Platform : Codeforces #466A
 * Difficulty : Medium
 * Topic : Greedy, Math
 *
 * Time Complexity  : O(1)
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

    long long n, m, a, b;
    cin >> n >> m >> a >> b;

    // Compare single ride ticket cost vs m-ride special ticket cost
    if (m * a <= b) {
        cout << n * a << "\n";
    } else {
        // Buy m-ride tickets for main bulk + cheapest option for remainder
        cout << (n / m) * b + min((n % m) * a, b) << "\n";
    }

    return 0;
}
