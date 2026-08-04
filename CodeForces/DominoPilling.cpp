/*
 * Problem : Domino piling
 * Platform : Codeforces #50A
 * Difficulty : Easy
 * Topic : Math, Greedy
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

    int m, n;
    cin >> m >> n;

    // Each domino covers 2 squares; maximum dominos = total area / 2
    cout << (m * n) / 2 << "\n";

    return 0;
}
