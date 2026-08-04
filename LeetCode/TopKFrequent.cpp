/*
 * Problem : Top K Frequent Elements
 * Platform : LeetCode #347
 * Difficulty : Medium
 * Topic : Hash Map, Bucket Sort
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 * Submitted on : 11/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Map frequency of each unique number
        unordered_map<int, int> ump;
        for (int num : nums) {
            ump[num]++;
        }

        // Bucket sort where index represents element frequency
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto& pair : ump) {
            int num = pair.first;
            int count = pair.second;
            bucket[count].push_back(num);
        }

        vector<int> ans;

        // Traverse buckets from maximum frequency down to 0
        for (int i = nums.size(); i >= 0 && ans.size() < k; i--) {
            for (int num : bucket[i]) {
                ans.push_back(num);
                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};
