/*
 * Problem : Way Too Long Words
 * Platform : Codeforces #71A
 * Difficulty : Easy
 * Topic : Strings, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */


 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

        if (word.length() <= 10) {
            cout << word << '\n';
        } else {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << '\n';
        }
    }

    return 0;
}