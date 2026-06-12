/*
 * Problem : Invert Binary Tree
 * Platform : LeetCode #226
 * Difficulty : Easy
 * Topic : Binary Tree, DFS, Recursion
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(h)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */


 
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return NULL;

        invertTree(root->left);
        invertTree(root->right);

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        return root;
    }
};