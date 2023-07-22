class Solution
{
public:
    // Function to remove duplicates from unsorted linked list.
    Node* removeDuplicates(Node* head)
    {
        Node* curr = head;
        Node* prev = NULL;
        Node* nxt = curr->next;
        unordered_map<int, int> m;
        
        while (nxt != NULL) {
            m[curr->data]++;
            
            if (m[curr->data] > 1) {
                curr->next = NULL;
                prev->next = nxt;
                curr=nxt;
                nxt=nxt->next;
            }
            else{prev = curr;
            curr = nxt;
            nxt = nxt->next;}
        }
        
        m[curr->data]++;
        if (m[curr->data] < 2) {
            curr->next=NULL;
        }
        else{
            prev->next=NULL;
        }
        
        return head;
    }
};
