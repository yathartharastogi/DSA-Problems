/*
 * Problem : Maximum Depth of Binary Tree
 * Platform : LeetCode #104
 * Difficulty : Easy
 * Topic : Binary Tree, DFS, Recursion
 *
 * Time Complexity : O(n)
 * Space Complexity : O(h)
 * Submitted on : 13/6/2026
 * Submitted by : Yathartha Rastogi
 */


 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;

        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};