/*
 * Problem : Sum of Round Numbers
 * Platform : Codeforces #1352A
 * Difficulty : Easy
 * Topic : Math, Implementation
 *
 * Time Complexity  : O(t * log10(n))
 * Space Complexity : O(log10(n))
 * Submitted on : 18/07/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> round_numbers;
        int place = 1;

        // Decompose number into round parts (digit * 10^k)
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                round_numbers.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }

        // Print count and round numbers
        cout << round_numbers.size() << "\n";
        for (size_t i = 0; i < round_numbers.size(); i++) {
            cout << round_numbers[i] << (i == round_numbers.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
