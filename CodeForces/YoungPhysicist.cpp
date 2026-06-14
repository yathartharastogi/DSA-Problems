/*
 * Problem : A. Young Physicist
 * Platform : Codeforces #69A
 * Difficulty : Medium
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
    int n;
    cin >> n;

    int xSum = 0, ySum = 0, zSum = 0;

    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;

        xSum += x;
        ySum += y;
        zSum += z;
    }

    if (xSum == 0 && ySum == 0 && zSum == 0)
        cout << "YES";
    else
        cout << "NO";
}`