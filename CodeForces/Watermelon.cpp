/*
 * Problem : Watermelon
 * Platform : Codeforces #4A
 * Difficulty : Easy
 * Topic : Math, Implementation
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

// Check if weight is even
bool isEven(int w) {
    return w % 2 == 0;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w;
    cin >> w;

    // Watermelon can be split into two even parts iff w is even and > 2
    if (isEven(w) && w > 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
