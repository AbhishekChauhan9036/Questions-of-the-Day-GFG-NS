Node* deleteNode(Node *head,int x)
{
 
    Node *temp;
    if(x == 1)
    {
        temp=head;
        head=head->next;
        delete temp;
    }
    else
    {
        Node* prev;
        temp=head;
        for(int i=1;i<x;i++)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
        
    }
    return head;
}
