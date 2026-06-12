/*
 * Problem : Team
 * Platform : Codeforces #231A
 * Difficulty : Easy
 * Topic : Implementation, Greedy
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2) {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}