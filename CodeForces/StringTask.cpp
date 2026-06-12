/*
 * Problem : String Task
 * Platform : Codeforces #118A
 * Difficulty : Medium
 * Topic : Strings, Implementation
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

    for (char c : s){

        c = tolower(c);

        if(c != 'a' & c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){

            cout << '.' << c;
        }
    }

    return 0;
}