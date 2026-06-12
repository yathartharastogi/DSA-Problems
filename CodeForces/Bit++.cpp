/*
 * Problem : Bit++
 * Platform : Codeforces #282A
 * Difficulty : Easy
 * Topic : Implementation, Strings
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
    int x = 0;
    cin >> n;

    while(n--){

        string a;
        cin >> a;

        if(a[1] == '+'){
            x++;
        }
        else{
            x--;
        }

    }

    cout << x << '\n';

    return 0;
}