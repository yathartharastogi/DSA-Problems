/*
 * Problem : Next Round
 * Platform : Codeforces #158A
 * Difficulty : Easy
 * Topic : Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */



#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int cutoff = scores[k - 1];
    int ans = 0;

    for (int score : scores) {
        if (score >= cutoff && score > 0) {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}