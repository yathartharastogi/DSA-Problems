/*
 * Problem : Boy or Girl
 * Platform : Codeforces #236A
 * Difficulty : Easy
 * Topic : Strings, Set
 *
 * Time Complexity  : O(n log n)
 * Space Complexity : O(n)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */


 
#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> t;

    for (char c : s) {
        t.insert(c);
    }

    if (t.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}