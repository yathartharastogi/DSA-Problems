/*
 * Problem : Cheap Travel
 * Platform : Codeforces #466A
 * Difficulty : Medium
 * Topic : Greedy, Math
 *
 * Time Complexity : O(1)
 * Space Complexity : O(1)
 * Submitted on : 15/06/2026
 * Submitted by : Yathartha Rastogi
 */



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a, b;
    cin >> n >> m >> a >> b;

    if (m * a <= b) {
        cout << n * a;
    } else {
        cout << (n / m) * b + min((n % m) * a, b);
    }

    return 0;
}