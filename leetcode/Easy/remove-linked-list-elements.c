// Problem: Remove Linked List Elements
// Problem Code: remove-linked-list-elements
// Platform: CodeChef
// Difficulty / Rating: Easy
// Language: c
// Verdict: Accepted
// Problem URL: https://leetcode.com/problems/remove-linked-list-elements/
// Solved on: 2026-10-26T10:24:37.320Z

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode temp;
    temp.next = head;

    struct ListNode* curr = &temp;

    while (curr->next!=NULL) {

        if (curr->next->val == val) {
            curr->next=curr->next->next;
        } else {
            curr=curr->next;
        }
    }

    return temp.next;
    
}