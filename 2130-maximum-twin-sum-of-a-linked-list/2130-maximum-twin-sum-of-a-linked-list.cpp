class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* prev = nullptr;
        ListNode* curr = slow; 
        
        while (curr != nullptr) {
            ListNode* next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }
        
        int max_sum = 0;
        ListNode* start = head;
        
        while (prev != nullptr) {
            max_sum = max(max_sum, start->val + prev->val);
            start = start->next;
            prev = prev->next;
        }
        
        return max_sum;
    }
};