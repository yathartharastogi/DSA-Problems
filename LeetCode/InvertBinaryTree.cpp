/*
 * Problem : Invert Binary Tree
 * Platform : LeetCode #226
 * Difficulty : Easy
 * Topic : Binary Tree, DFS, Recursion
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(h)
 J/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // Base case: empty tree
        if (root == nullptr) return nullptr;

        // Recursively invert left and right subtrees
        invertTree(root->left);
        invertTree(root->right);

        // Swap left and right child pointers
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        return root;
    }
};
