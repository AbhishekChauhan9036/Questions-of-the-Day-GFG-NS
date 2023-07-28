class Solution{
    public:
        
bool allancestors(Node *root , vector<Node*>&v , int n)
        {
            if(root==NULL)
            {
                return false;
            }
            v.push_back(root);
            
            if(root->data==n)
            {
                return true;
            }
            
            
            if (allancestors(root->left , v ,  n) || allancestors(root->right , v , n))
            {
                return true;
            }
            
            v.pop_back();
            return false;
        }
        
        
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            vector<Node*>ancestor1;
            vector<Node*>ancestor2;
            
            allancestors(root , ancestor1 , n1);
            allancestors(root , ancestor2 , n2);
            
            int i;
            for(i=0 ; i<ancestor1.size() && i<ancestor2.size() ; i++)
            {
                if(ancestor1[i] ->data != ancestor2[i] -> data)
                {
                    break;
                }
            }
            
            return ancestor1[i-1];
        }

};
