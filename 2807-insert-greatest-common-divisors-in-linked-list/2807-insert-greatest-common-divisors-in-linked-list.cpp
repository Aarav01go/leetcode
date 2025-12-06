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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* bhondu;
        bhondu=head;
        if(head!=NULL){
            while(head->next!=NULL){
                ListNode* temp= new ListNode(-1);
                temp->val=gcd(head->val,(head->next)->val);
                ListNode* root;
                root = head->next;
                head->next=temp;
                temp->next=root;
                head=head->next->next;
            }
        }
        return bhondu;
    }
};