/*
 * Problem : Beautiful Matrix
 * Platform : Codeforces #263A
 * Difficulty : Easy
 * Topic : Implementation, Matrix
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 16/06/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int val;
    int r = 0, c = 0;

    // Read 5x5 matrix and find coordinates of '1'
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> val;
            if (val == 1) {
                r = i;
                c = j;
            }
        }
    }

    // Manhattan distance to center cell (3, 3)
    int moves = abs(r - 3) + abs(c - 3);

    cout << moves << "\n";
    return 0;
}
