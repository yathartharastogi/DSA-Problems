/*
 * Problem : Nearly Lucky Number
 * Platform : Codeforces #110A
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

    long long n;
    cin >> n;
    int count = 0;

    while(n>0){
        if(n % 10 == 4 || n % 10 == 7){
            count++;
        }

        n /= 10;
    }

    if(count == 4 || count == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}