class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL) return NULL;
        if (left == right) return head;
        stack<int> mug;
        ListNode* curr = head;
        int pos = 1;
        while (curr != NULL) {
            if (pos >= left && pos <= right) mug.push(curr->val);
            curr = curr->next;
            pos++;
        }
        curr = head;
        pos = 1;
        while (curr != NULL) {
            if (pos >= left && pos <= right) {
                curr->val = mug.top();
                mug.pop();
            }
            curr = curr->next;
            pos++;
        }
        return head;
    }
};