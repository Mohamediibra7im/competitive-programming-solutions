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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v = {-1, -1};
        ListNode* temp_prev = head;
        ListNode* temp_curr = head->next;
        ListNode* temp_next = temp_curr->next;

        if (temp_next == nullptr)
            return v;

        int ctr = 1e5 + 3, cnt = 0, max_cnt = 0, min_cnt = 1e5 + 3, f = 0;
        int x = 0;
        while (temp_next != nullptr) {
            if (f) {
                ctr++;
                cnt++;
            }

            if ((temp_prev->val < temp_curr->val and
                 temp_curr->val > temp_next->val) or
                (temp_prev->val > temp_curr->val and
                 temp_curr->val < temp_next->val)) {
                x++;
                f = 1;
                max_cnt += cnt;
                cnt = 0;
                min_cnt = min(min_cnt, ctr - 1);
                ctr = 1;
            }
            temp_prev = temp_curr;
            temp_curr = temp_next;
            temp_next = temp_next->next;
        }
        if (x < 2) {
            v[0] = -1;
            v[1] = -1;
        } else {
            v[0] = min_cnt;
            v[1] = max_cnt;
        }
        return v;
    }
};