/*
 * Problem : Helpful Maths
 * Platform : Codeforces #339A
 * Difficulty : Easy
 * Topic : Strings, Sorting
 *
 * Time Complexity  : O(n log n)
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

    string s;
    cin >> s;

    vector<int> nums;

    // Extract numbers between '+' signs
    for (char c : s) {
        if (c != '+') {
            nums.push_back(c - '0');
        }
    }

    // Sort numbers in non-decreasing order
    sort(nums.begin(), nums.end());

    // Print reordered expression formatted with '+'
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << (i == nums.size() - 1 ? "" : "+");
    }
    cout << "\n";

    return 0;
}
