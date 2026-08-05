/*
 * Problem : Drinks
 * Platform : Codeforces #200B
 * Difficulty : Easy
 * Topic : Math, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 18/06/2026
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

    double sum = 0;
    for (int i = 0; i < n; i++) {
        double p;
        cin >> p;
        sum += p;
    }

    // Calculate average volume fraction
    cout << fixed << setprecision(12) << sum / n << "\n";

    return 0;
}
