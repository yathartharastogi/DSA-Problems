/*
 * Problem : Helpful Maths
 * Platform : Codeforces #339A
 * Difficulty : Easy
 * Topic : Strings, Sorting
 *
 * Time Complexity  : O(n log n)
 * Space Complexity : O(n)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */


 
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    string s;
    cin >> s;

    vector<char> nums;

    for(char c : s){
        if(c != '+'){
            nums.push_back(c);
        }
    }

    sort(nums.begin(), nums.end()); 

    cout << nums[0];

    for(int i = 1; i < nums.size(); i++){
        cout << '+' << nums[i];
    }

    return 0;

}