
class Solution
{
public:
     bool isLeaf(Node *p) {return !p->right && !p->left;}

    

    void helper(Node *root , int &ans , int &Max){

        if(!root) return;

        if(isLeaf(root)) return;

        if(root->left && root->right){

            int g=__gcd(root->left->data , root->right->data);

            if(Max<g){

                Max=__gcd(root->left->data , root->right->data);

                ans=root->data;

            }

            else if(Max==g){

                ans=max(ans , root->data);

            }

        }

        helper(root->left , ans , Max);

        helper(root->right , ans , Max);

    }

    int maxGCD( Node* root)

    {

        //code here

        if(!root) return 0;

        int ans=0 , Max=0;

        helper(root , ans , Max);

        return ans;

    }
};
