class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr != NULL) {
            if (curr->next != NULL && curr->val == curr->next->val) {
                int cr = curr->val;
                while (curr != NULL && curr->val == cr) {
                    curr = curr->next;
                }
                if (prev != NULL) prev->next = curr;
                else head = curr;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};