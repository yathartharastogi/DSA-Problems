/*
 * Problem : Chat Room
 * Platform : Codeforces #58A
 * Difficulty : Easy
 * Topic : Strings, Greedy, Implementation
 *
 * Time Complexity : O(n)
 * Space Complexity : O(1)
 * Submitted on : 15/07/2026
 * Submitted by : Yathartha Rastogi
 */


 
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;


    string check = "hello";

    int j = 0;

    for(char c : s){

        if(j < check.size() && c == check[j]){
            j++;
        }
    }

    if(j == check.size()){
        cout << "YES" << endl;
    }

    else {
        cout << "NO" << endl;
    }

}