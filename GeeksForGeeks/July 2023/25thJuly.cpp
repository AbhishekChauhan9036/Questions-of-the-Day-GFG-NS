//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    if(root == NULL) return {-1};
    vector<int> ans;
    bool flag = false;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()) {
        int size = q.size();
        vector<int> temp;
        for(int i = 0; i < size; i++) {
            Node* node = q.front();
            
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            
            temp.push_back(node->data);
            
            q.pop();
        }
        
        if(!flag) {
            reverse(temp.begin(), temp.end());
        }
        
        for(auto i : temp) {
            ans.push_back(i);
        }
        
        flag = !flag;
        
    }
    
    return ans;
    
}
