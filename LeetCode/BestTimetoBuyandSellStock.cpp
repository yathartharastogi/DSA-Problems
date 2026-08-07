/*
 * Problem : Best Time to Buy and Sell Stock
 * Platform : LeetCode #121
 * Difficulty : Easy
 * Topic : Array, Greedy
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 15/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Minimum buy price seen so far
        int minp = prices[0];
        // Maximum profit achievable
        int maxp = 0;

        for (int price : prices) {
            // Update minimum purchase price
            minp = min(minp, price);

            // Calculate profit if sold today
            int profit = price - minp;

            // Track maximum profit
            maxp = max(maxp, profit);
        }

        return maxp;
    }
};
