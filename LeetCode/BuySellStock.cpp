/*
 * Problem : Best Time to Buy and Sell Stock
 * Platform : LeetCode #121
 * Difficulty : Easy
 * Topic : Array, Dynamic Programming
 *
 * Time Complexity : O(n)
 * Space Complexity : O(1)
 *
 * Submitted on : 10/6/2026
 * Submitted by : Yathartha Rastogi
 */


 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int maxp = 0;

        for (int price : prices) {
            minp = min(minp, price);

            int profit = price - minp;

            maxp = max(maxp, profit);
        }

        return maxp;
    }
};