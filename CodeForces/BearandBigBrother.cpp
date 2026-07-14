/*
 * Problem : Bear and Big Brother
 * Platform : Codeforces #791A
 * Difficulty : Easy
 * Topic : Implementation, Simulation
 *
 * Time Complexity : O(log n)
 * Space Complexity : O(1)
 * Submitted on : 14/07/2026
 * Submitted by : Yathartha Rastogi
 */




#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b; 
    int i = 0;

    cin >> a >> b;
    while (a <= b ){
        a = a*3;
        b = b*2;
        i++;
    }

    cout << i;
}