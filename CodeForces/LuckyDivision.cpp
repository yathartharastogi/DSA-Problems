/*
 * Problem : Lucky Division
 * Platform : Codeforces #122A
 * Difficulty : Easy
 * Topic : Math, Number Theory, Brute Force
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 18/07/2026
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

    int temp = n;
    bool isLuckyDigits = true;

    // Check if n consists solely of lucky digits (4 and 7)
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 4 && digit != 7) {
            isLuckyDigits = false;
            break;
        }
        temp /= 10;
    }

    // List of pre-defined lucky numbers up to 1000
    vector<int> lucky = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    bool isAlmostLucky = isLuckyDigits;

    // Check if n is divisible by any lucky number
    for (int x : lucky) {
        if (n % x == 0) {
            isAlmostLucky = true;
            break;
        }
    }

    if (isAlmostLucky) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
