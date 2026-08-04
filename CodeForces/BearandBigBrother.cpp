/*
 * Problem : Bear and Big Brother
 * Platform : Codeforces #791A
 * Difficulty : Easy
 * Topic : Implementation, Simulation
 *
 * Time Complexity  : O(log n)
 * Space Complexity : O(1)
 * Submitted on : 14/07/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int years = 0;

    // Simulate growth: Lim's weight triples (x3), Bob's weight doubles (x2) each year
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years << "\n";
    return 0;
}
