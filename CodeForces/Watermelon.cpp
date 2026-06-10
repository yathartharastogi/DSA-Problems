/*
 * Problem : Watermelon
 * Platform : Codeforces 4A
 * Difficulty : Easy
 * Topic : Math, Implementation
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */


 
#include <iostream>
using namespace std;

bool isEven(int w){
    return w % 2 == 0;
}
int main(){
    int w;
    cin >> w;
    
    if (isEven(w) && w > 2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

