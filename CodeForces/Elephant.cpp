/*
 * Problem : Elephant
 * Platform : Codeforces #617A
 * Difficulty : Easy
 * Topic : Math, Greedy
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    // Minimum 5-unit steps needed to reach position x
    int steps = (x + 4) / 5;

    cout << steps << "\n";
    return 0;
}
