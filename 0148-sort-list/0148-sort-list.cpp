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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode* temp;
        temp=head;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        head=temp;
        sort(v.begin(),v.end());
        int i=0;
        while(head!=NULL&&i<v.size()){
            head->val=v[i];
            i++;
            head=head->next;
        }
        return temp;

    }
};