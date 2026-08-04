/*
 * Problem : Add Two Numbers
 * Platform : LeetCode #2
 * Difficulty : Medium
 * Topic : Linked List, Math, Simulation
 *
 * Time Complexity  : O(max(n, m))
 * Space Complexity : O(max(n, m))
 * Submitted on : 14/06/2026
 * Submitted by : Yathartha Rastogi
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Dummy head node to simplify result list construction
        ListNode dummy(0);
        auto cur = &dummy;
        int carry = 0; // Carry over from previous addition

        // Loop until both list nodes and carry are processed
        while (l1 || l2 || carry) {
            // Calculate sum of current digits and carry
            int sum = carry +
                     (l1 ? l1->val : 0) +
                     (l2 ? l2->val : 0);

            // Compute new carry and current digit node
            carry = sum / 10;
            cur = cur->next = new ListNode(sum % 10);

            // Advance pointers if available
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        // Return head of the resulting linked list
        return dummy.next;
    }
};
