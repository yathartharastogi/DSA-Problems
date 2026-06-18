/*
 * Problem : Drinks
 * Platform : Codeforces #200B
 * Difficulty : Easy
 * Topic : Math, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 18/06/2026
 * Submitted by : Yathartha Rastogi
 */

 

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    double sum = 0;
    cin >> n;
    int total = n;

    while(n--){
        int p;
        cin >> p;
        sum += p;

    }

    cout << sum/total;

    return 0;


}
