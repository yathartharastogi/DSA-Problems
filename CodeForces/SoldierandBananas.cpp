/*
 * Problem : Soldier and Bananas
 * Platform : Codeforces #546A
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

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long k, n, w;
    cin >> k >> n >> w;

    // Sum of arithmetic progression: k + 2k + ... + wk = k * (w * (w + 1)) / 2
    long long totalCost = k * (w * (w + 1)) / 2;

    // Amount needed to borrow from friend
    long long borrow = max(0LL, totalCost - n);

    cout << borrow << "\n";
    return 0;
}
