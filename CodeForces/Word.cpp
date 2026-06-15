/*
 * Problem : Word
 * Platform : Codeforces #59A
 * Difficulty : Easy
 * Topic : Strings, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 14/06/2026
 * Submitted by : Yathartha Rastogi
 */


 
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    int upper = 0;
    int lower = 0;

    cin >> s;

    for (char c : s) {

        if (isupper(c))
            upper++;
        
        else
            lower++;
    }

    if (upper > lower) {
        
        for (char &c : s) {
            c = toupper(c);
        }
    }

    else {
    
        for (char &c : s) {
            c = tolower(c);
        }
    }

    cout << s;

    return 0;
}