/*
 * Problem : IQ Test
 * Platform : Codeforces #25A
 * Difficulty : Easy
 * Topic : Brute Force, Math
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 * Submitted on : 05/08/2026
 * Submitted by : Yathartha Rastogi
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int even = 0, odd = 0;

    // Count even and odd numbers
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Find the single even or single odd element index
    if (even == 1) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                cout << i + 1;
                break;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                cout << i + 1;
                break;
            }
        }
    }

    return 0;
}
