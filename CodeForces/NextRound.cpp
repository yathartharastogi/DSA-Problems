/*
 * Problem : Next Round
 * Platform : Codeforces #158A
 * Difficulty : Easy
 * Topic : Implementation, Array
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Cutoff score from the k-th participant (0-indexed k-1)
    int cutoff = a[k - 1];
    int count = 0;

    // Count participants with score >= cutoff and score > 0
    for (int i = 0; i < n; i++) {
        if (a[i] >= cutoff && a[i] > 0) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}
