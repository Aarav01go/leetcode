class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr) {
            if (curr->val == val) {
                prev->next = curr->next;
            } else {
                prev = curr;
            }
            curr = curr->next;
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};