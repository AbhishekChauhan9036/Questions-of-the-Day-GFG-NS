class Solution {
  public:
    // Function to find largest subtree sum.
    int search(Node* root, int &sol)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int subsum = root->data + search(root->left, sol) + search(root->right, sol);
        if(subsum > sol)
        {
            sol = subsum;
        }
        
        return subsum;
    }
    
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        int sol = INT_MIN;
        search(root, sol);
        
        return sol;
    }
};
