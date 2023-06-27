
class Solution{
  public:
    /*You are required to complete this method*/
   int maxDepth(Node *root) {
        if(root == NULL)
            return 0;
        stack<pair<Node * , int>>st; // node , level
        st.push({root , 1});
        int maxDepth = 0;
        while(!st.empty()){
            Node* curr = st.top().first;
            int currLevel = st.top().second;
            st.pop();
            maxDepth = max(maxDepth , currLevel);
            if(curr->left)
                st.push({curr->left , currLevel+1});
            if(curr->right)
                st.push({curr->right , currLevel + 1});
        }
        return maxDepth;
    }
};
