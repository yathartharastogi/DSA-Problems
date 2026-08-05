/*
 * Problem : Nikita and Books
 * Platform : Codeforces Context 1090
 * Difficulty : Easy
 * Topic : Array, Implementation, Prefix Sum
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 * Submitted on : 15/07/2026
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

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool check = true;

        // Verify book prefix condition
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < i + 1) {
                check = false;
                break;
            }

            a[i + 1] = a[i] + a[i + 1] - (i + 1);
        }

        if (check && a[n - 1] < n) {
            check = false;
        }

        cout << (check ? "YES" : "NO") << "\n";
    }

    return 0;
}
