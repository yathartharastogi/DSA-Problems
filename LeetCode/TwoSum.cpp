/*
 * Problem : Two Sum
 * Platform : LeetCode #1
 * Difficulty : Easy
 * Topic : Array, Hash Table
 *
 * Time Complexity  : O(n²)
 * Space Complexity : O(1)
 * Submitted on : 08/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Double loop to check all pairs for target sum
        for (size_t i = 0; i < nums.size(); i++) {
            for (size_t j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {static_cast<int>(i), static_cast<int>(j)};
                }
            }
        }
        return {};
    }
};
