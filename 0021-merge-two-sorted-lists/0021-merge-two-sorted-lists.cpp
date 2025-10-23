/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // If either list is empty, return the other
        if (!list1) return list2;
        if (!list2) return list1;

        // Create a dummy node to simplify the logic
        ListNode dummy;
        ListNode* tail = &dummy;

        // Traverse both lists and merge in sorted order
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Attach the remaining part of the non-empty list
        if (list1) tail->next = list1;
        if (list2) tail->next = list2;

        return dummy.next;
    }
};