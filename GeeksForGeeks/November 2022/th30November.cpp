class Solution{ 
public:
    void reorderList(Node* head) {
        int l=0;
        Node* temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        int times=(l+1)/2;
        times--;
        temp=head;
        while(times--){
            temp=temp->next;
        }
        Node* head1=temp->next;
        temp->next=NULL;
        int l1=l/2;
        temp=head1;
        Node* temp1=temp;
        Node* ch=NULL;
        while(temp!=NULL){
            if(temp->next==NULL){head1=temp;}
            temp1=temp->next;
            temp->next=ch;
            ch=temp;
            temp=temp1;
        }
        temp=head;
        temp1=head1;
        ch=head1;
        Node* ch1=head;
         l1=l/2;
        while(temp1!=NULL){
            ch=temp1->next;
            ch1=temp->next;
            temp1->next=temp->next;
            temp->next=temp1;
            temp=ch1;
            temp1=ch;
        }
    }
};
