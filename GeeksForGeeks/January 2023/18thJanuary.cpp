class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
     int findFirstNode(Node* head)
    {
        Node *temp=head;
        bool f=true;
        Node*t=head,*fast=head,*slow=head;
        while(slow!=NULL &&fast!=NULL && fast->next!=NULL){
           fast=fast->next->next;
            slow=slow->next;
              if(slow==NULL||slow->next==NULL || fast->next==NULL || fast->next->next==NULL||fast==NULL) {
                f==false;
                break;
            }
            if(fast==slow){
                break;
            }
        }
        if(f==false) return -1;
        if(slow==head) return slow->data;
        while(t!=NULL &&slow!=NULL){
        t=t->next;
        slow=slow->next;
        if(slow==t) return t->data;
        }
        return -1;
    }
};
