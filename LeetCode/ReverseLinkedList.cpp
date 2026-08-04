/*
 * Problem : Reverse Linked List
 * Platform : LeetCode #206
 * Difficulty : Easy
 * Topic : Linked List, Recursion
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(n)
 * Submitted on : 15/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Base case: empty list or single node
        if (head == nullptr || head->next == nullptr)
            return head;

        // Recursively reverse remaining list
        ListNode* newhead = reverseList(head->next);

        // Adjust pointers to reverse connection
        head->next->next = head;
        head->next = nullptr;

        return newhead;
    }
};
