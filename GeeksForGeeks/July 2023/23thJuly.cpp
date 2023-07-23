class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        int A[3]={0};
        // Add code here
        Node*  tmp = head;
        while(tmp!=NULL){
            A[tmp->data]++;
            tmp = tmp ->next;
        }
        
        // cout<<A[0]<<A[1]<<A[2];
        
        tmp = head;
        int l=0;
        while(tmp!=NULL){
            if(A[l]>0){
                tmp->data=l;
                A[l]--;
            }
            else{
                l++;
                if(A[l]==0)l++;
                tmp->data=l;
                A[l]--;
                
            }
            tmp = tmp->next;
        }
        return head;
    }
};
