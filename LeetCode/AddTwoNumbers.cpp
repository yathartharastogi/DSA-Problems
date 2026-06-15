/*
 * Problem : Add Two Numbers
 * Platform : LeetCode
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
        ListNode dummy(0);
        auto cur = &dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry +
                     (l1 ? l1->val : 0) +
                     (l2 ? l2->val : 0);

            carry = sum / 10;
            cur = cur->next = new ListNode(sum % 10);

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy.next;
    }
};
