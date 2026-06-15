/*
 * Problem : Reverse Linked List
 * Platform : LeetCode #206
 * Difficulty : Easy
 * Topic : Linked List, Recursion
 *
 * Time Complexity : O(n)
 * Space Complexity : O(n)
 * Submitted on : 15/06/2026
 * Submitted by : Yathartha Rastogi
 */
 

 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;

        ListNode* newhead = reverseList(head->next);

        head->next->next = head;
        head->next = nullptr;

        return newhead;
    }
};