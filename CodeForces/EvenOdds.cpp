/*
 * Problem : Even Odds
 * Platform : Codeforces #318A
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    long long oddsCount = (n + 1) / 2;

    if (k <= oddsCount) {
        cout << 2 * k - 1 << "\n";
    } else {
        cout << 2 * (k - oddsCount) << "\n";
    }

    return 0;
}
