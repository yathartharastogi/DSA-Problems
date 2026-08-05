/*
 * Problem : Maximum Depth of Binary Tree
 * Platform : LeetCode #104
 * Difficulty : Easy
 * Topic : Binary Tree, DFS, Recursion
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(h)
 K/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        // Base case: empty node contributes 0 to depth
        if (root == nullptr)
            return 0;

        // Depth is 1 + maximum depth of left or right subtree
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
