class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head == NULL || head->next == NULL){
            return head;
        }
        stack<Node*> st;
        st.push(head);
        Node* ans = head->next;
        Node* maxnodes = st.top();
        while(ans){
            if(ans->data <= (st.top())->data){
                st.push(ans);
            }
            else{
                while(!st.empty() && ans->data > (st.top())->data){
                    Node* temp = st.top();
                    st.pop();
                    free(temp);
                }
                if(!st.empty())
                    (st.top())->next = ans;
                else
                    maxnodes = ans;
                    
                st.push(ans);
            }

            ans = ans->next;
        }
        return maxnodes;
    }
};
