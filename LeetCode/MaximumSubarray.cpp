/*
 * Problem : Maximum Subarray
 * Platform : LeetCode #53
 * Difficulty : Medium
 * Topic : Array, Dynamic Programming
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 * Submitted on : 16/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Track maximum sum ending at current position (Kadane's Algorithm)
        int currentSum = nums[0];
        // Track global maximum subarray sum
        int maxSum = nums[0];

        for (size_t i = 1; i < nums.size(); i++) {
            // Decide whether to add current element to existing subarray or start fresh
            currentSum = max(nums[i], currentSum + nums[i]);
            // Update overall maximum
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
