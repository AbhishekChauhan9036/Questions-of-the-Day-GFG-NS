
class Solution
{
    public:
       void solve(Node* root , int k ,int &ans)
    {
        if(root == NULL)
        return;
        
        ans = min(ans , abs(root->data-k));
        solve(root->left , k , ans);
        solve(root->right , k ,ans);
        
    }
    int minDiff(Node *root, int k)
    {
        int ans = INT_MAX;
        solve(root , k ,ans);
        return ans;
        
    }
};
