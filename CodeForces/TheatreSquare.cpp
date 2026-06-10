/*
 * Problem : Theatre Square
 * Platform : Codeforces #1A
 * Difficulty : Medium
 * Topic : Math, Implementation
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */


 
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long m,n,a;
    cin >> m >> n >> a;

    long long r = (m + a - 1)/a;
    long long c = (n + a - 1)/a;
    cout<< r * c;
    

    return 0;
}

