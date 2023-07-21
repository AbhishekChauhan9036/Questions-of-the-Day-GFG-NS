class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
    struct node * curr=head;
    struct node * prev=NULL;
    struct node * next=NULL;
    int count=0;
    while(curr!=NULL&&count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    
    if(next!=NULL)
    {
        head->next=reverse(next,k);
    }
    return prev;
    
    }
};
