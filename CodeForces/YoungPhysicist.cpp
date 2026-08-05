/*
 * Problem : Young Physicist
 * Platform : Codeforces #69A
 * Difficulty : Easy
 * Topic : Math, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 14/06/2026
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

    int sumX = 0, sumY = 0, sumZ = 0;

    // Sum up force vectors along x, y, and z axes
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    // Body is in equilibrium if net force along all 3 axes is 0
    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
