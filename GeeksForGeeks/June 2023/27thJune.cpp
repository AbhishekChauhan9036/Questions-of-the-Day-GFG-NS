

class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        struct Node* result = new Node(0);
        struct Node* temp = new Node(0);
        set<int> s;
        while(head1)
        {
            s.insert(head1->data);
            head1=head1->next;
        }
        while(head2)
        {
            s.insert(head2->data);
            head2=head2->next;
        }
        result = temp;
        for (auto const &e: s) 
        {
            struct Node* newNode = new Node(e);  
            temp->next = newNode;  
            temp = temp->next;
        }
        result = result->next;
        return result;
    }
};
