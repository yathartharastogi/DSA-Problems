/*
 * Problem : Theatre Square
 * Platform : Codeforces #1A
 * Difficulty : Easy
 * Topic : Math
 *
 * Time Complexity  : O(1)
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

    long long n, m, a;
    cin >> n >> m >> a;

    // Calculate flagstones needed along length and width (ceil division)
    long long length_flagstones = (n + a - 1) / a;
    long long width_flagstones = (m + a - 1) / a;

    // Total flagstones required
    cout << length_flagstones * width_flagstones << "\n";

    return 0;
}
