/*
 * Problem : A. Word Capitalization
 * Platform : Codeforces #281A
 * Difficulty : Easy
 * Topic : Strings
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */



#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    s[0] = toupper(s[0]);

    cout << s;
}