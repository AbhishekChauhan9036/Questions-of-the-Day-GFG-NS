
class Solution{
    public:
    int count(Node * head){
        int c = 0;
        while(head){
            c++;
            head=head->next;
        }
        return c;
    }
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        int n = count(head);
        Node* p = head;
        Node *prev=NULL;
        //reversing the first half
        for(int i=1;i<=n/2;++i){
            Node * temp = p->next;
            p->next=prev;
            prev=p;
            p=temp;
        }
        Node *l=prev,*r=p;
        if(n&1)
            r=r->next;
        // iterating both halves and changing values as per condition
        for(int i=1;i<=n/2;++i){
            int temp = l->data;
            l->data = r->data-temp;
            r->data = temp;
            l=l->next;
            r=r->next;
        }
        // again combining both the halves
        l=prev;
        prev = p;
        p=l;
        for(int i=1;i<=n/2;++i){
            Node * temp = p->next;
            p->next=prev;
            prev=p;
            p=temp;
        }
        return head;
    }
};
