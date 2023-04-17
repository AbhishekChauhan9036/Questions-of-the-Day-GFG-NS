class Solution {
public:
    int ans=INT_MAX;
    pair<pair<int,int>,pair<int,int>> f(Node *root,int target)
    {
        if(!root)
        {
            return {{INT_MAX,INT_MIN},{0,0}};
        }
        auto left = f(root->left,target);
        auto right = f(root->right,target);
        if(root->data>left.first.second&&root->data<right.first.first)
        {
            if((left.second.second+right.second.second+root->data)==target) ans = min(ans,left.second.first+right.second.first+1);
            int curmin = min(root->data,min(left.first.first,right.first.first));
            int curmax = max(root->data,max(left.first.second,right.first.second));
            return {{curmin,curmax},{left.second.first+right.second.first+1,(left.second.second+right.second.second+root->data)}};
        }
        else return {{INT_MIN,INT_MAX},{0,0}};
    }
    int minSubtreeSumBST(int target, Node *root) {
        auto it = f(root,target);
        if(ans==INT_MAX) return -1;
        else return ans;
    }
};
