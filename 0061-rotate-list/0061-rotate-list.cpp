class Solution {
public:
    void helper(ListNode* head) {
        if (!head || !head->next) return;
        int prev = head->val;
        ListNode* curr = head->next;
        while (curr) {
            int temp = curr->val;
            curr->val = prev;
            prev = temp;
            curr = curr->next;
        }
        head->val = prev;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int len = 0;
        ListNode* curr = head;
        while (curr) {
            len++;
            curr = curr->next;
        }
        k %= len;
        for (int i = 0; i < k; i++) {
            helper(head);
        }
        return head;
    }
};