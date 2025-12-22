class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans=new ListNode(0);
        ListNode* list=ans;
        int sum=0;
        head=head->next;
        while(head!=NULL){
            if(head->val!=0){
                sum+=head->val;
            }else{
                list->next=new ListNode(sum);
                list=list->next;
                sum=0;
            }
            head=head->next;
        }
        return ans->next;
    }
};
