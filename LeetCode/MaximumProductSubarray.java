/*
 * Problem : Maximum Product Subarray
 * Platform : LeetCode #152
 * Difficulty : Medium
 * Topic : Array, Dynamic Programming
 *
 * Time Complexity  : O(n^2)
 * Space Complexity : O(1)
 * Submitted on : 07/08/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;
        int maxp = nums[0];
        
        // Iterate through all contiguous subarrays to calculate maximum product
        for (int i = 0; i < n; i++) {
            int mul = 1;

            for (int j = i; j < n; j++) {
                mul *= nums[j];
                maxp = Math.max(maxp, mul);
            }
        }
        return maxp;
    }
}
