/*
 * Problem : Group Anagrams
 * Platform : LeetCode #49
 * Difficulty : Medium
 * Topic : Hash Map, String
 *
 * Time Complexity  : O(n * k log k)
 * Space Complexity : O(n * k)
 H/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map sorted canonical string to list of original anagram strings
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            // Sort characters to create unique key for anagrams
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }

        vector<vector<string>> result;

        // Collect all grouped anagram lists
        for (auto& pair : mp) {
            result.push_back(pair.second);
        }

        return result;
    }
};
