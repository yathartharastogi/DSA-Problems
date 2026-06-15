/*
 * Problem : Soldier and Bananas
 * Platform : Codeforces #546A
 * Difficulty : Easy
 * Topic : Math
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */



#include  <bits/stdc++.h>
using namespace std;

int main() {

    int long long k, n, w;
    cin >> k >> n >> w;

    long long cost = k*(w*(w+1)/2);
    
    cout << max(0LL, cost-n);

    return 0;

}