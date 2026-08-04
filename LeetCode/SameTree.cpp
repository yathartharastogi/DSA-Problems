/*
 * Problem : Same Tree
 * Platform : LeetCode #100
 * Difficulty : Easy
 * Topic : Binary Tree, Recursion
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(h)
 * Submitted on : 10/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both nodes are null -> identical
        if (p == nullptr && q == nullptr) {
            return true;
        }

        // One node is null while other is not -> not identical
        if (p == nullptr || q == nullptr) {
            return false;
        }

        // Node values differ -> not identical
        if (p->val != q->val) {
            return false;
        }

        // Check both left and right subtrees recursively
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
