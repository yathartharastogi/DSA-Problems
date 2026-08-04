/*
 * Problem : Boy or Girl
 * Platform : Codeforces #236A
 * Difficulty : Easy
 * Topic : Strings, Set
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    unordered_set<char> st;

    // Collect distinct characters in username
    for (char c : s) {
        st.insert(c);
    }

    // Determine gender response based on parity of distinct characters count
    if (st.size() % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}
