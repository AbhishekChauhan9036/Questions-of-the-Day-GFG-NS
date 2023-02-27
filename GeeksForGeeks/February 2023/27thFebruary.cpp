
class Solution
{
public:
    Node* reverseList(Node* head){
        Node* temp=NULL,*nex=NULL;
        while(head){
            nex=head->next;
            head->next=temp;
            temp=head;
            head=nex;
        }
        return temp;
    }
    Node *reverse(Node *head, int k)
    {
        // code here
        //creating a new linked list which will contain first k elements
        Node* tmp1 = new Node(-1);
        //creating another new linked list which will contain n-k elements
        Node* tmp2 = new Node(-1);
        //Iterator to head
        Node* tmp = head; 
        //it1 is iterator to first ll and it2 is the iterator to the second ll
        Node* it1=tmp1,*it2=tmp2;
        int i=0;
        //Here we pick the first k elements into the first ll
        while(i<k and head){
            tmp1->next=head;
            head=head->next;
            i++;
            tmp1=tmp1->next;
        }
        tmp1->next=NULL;
        //Here we pick the rest of the  elements into the next ll
        while(head){
            tmp2->next=head;
            head=head->next;
            // i++;
            tmp2=tmp2->next;
        }
        tmp2->next=NULL;
        //Here we remove the first -1 and get hold of the actual ll
        it1=it1->next;
        it2=it2->next;
        //Then we just reverse the LL
        it1 = reverseList(it1);
        it2 = reverseList(it2);
        //Iterator to thr first reversed LL
        Node* temp = it1;
        //Here we iterate to the end of the firstt reversed LL
        while(temp->next)
            temp=temp->next;
        //Then we connect the first end of the ll to the start of the second LL
        temp->next = it2;
        // Finally we return the reverse ll
        return it1;
    }
};


