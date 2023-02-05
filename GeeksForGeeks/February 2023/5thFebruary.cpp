class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2) {
        Node *a=head1, *b=head2;
        while(a!=b) {
            a=a->next?a->next:head2;
            b=b->next?b->next:head1;
        }
        return a->data;
    }
};
