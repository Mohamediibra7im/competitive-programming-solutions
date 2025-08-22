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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = head;
        ListNode* after = head->next;

        while (after->next) {
            if (curr->val != 0 && after->val != 0) {
                curr->val += after->val;
                curr->next = after->next;
                after = after->next;
            } else if (after->val == 0) {
                curr->next = after->next;
                curr = after->next;
                after = after->next->next;
            } else {
                curr = curr->next;
                after = after->next;
            }
        }

        curr->next = nullptr;
        return head->next;
    }
};