/*
 * Problem : Football
 * Platform : Codeforces #96A
 * Difficulty : Easy
 * Topic : Strings, Implementation
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 19/06/2026
 * Submitted by : Yathartha Rastogi
 */



#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int n = s.length();
    int count = 1;

    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            count++;

            if(count >= 7){
                cout << "YES";
                return 0;
            
            }
        }   else{
            count = 1; 
        }
        
    }

    cout << "NO";
    return 0;

}