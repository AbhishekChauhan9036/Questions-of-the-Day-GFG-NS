class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(!head->next)
            return head;
        ListNode*pt=head;
        while(head->next->next){
            head=head->next;
        }
        ListNode*tmp=head->next;
        head->next=NULL;
        tmp->next=pt;
        return tmp;
    }
};