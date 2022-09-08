int dfs(Node *root,int &k){
    if(!root || !k)
        return 0;
    int ans = dfs(root->left,k);
    if(k)
        ans+=root->data,k--;
    return ans+=dfs(root->right,k);
}
int sum(Node* root, int k) 
{ 
    return dfs(root,k);
}  