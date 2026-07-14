/*
 * Problem : Beautiful Matrix
 * Platform : Codeforces #263A
 * Difficulty : Easy
 * Topic : Implementation, Matrix
 *
 * Time Complexity : O(25) ≈ O(1)
 * Space Complexity : O(1)
 * Submitted on : 16/06/2026
 * Submitted by : Yathartha Rastogi
 */



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, row, col;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> x;
            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }

    cout << abs(row - 2) + abs(col - 2);

    return 0;
}