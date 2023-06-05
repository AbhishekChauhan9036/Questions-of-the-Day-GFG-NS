class Solution
{
    public:
        void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
         if(root)
         {
             findPreSuc(root->left,pre,suc,key);
             if(root->key < key)
                 pre=root;
             if(root->key > key and suc==NULL)
                 suc=root;
             findPreSuc(root->right,pre,suc,key);
         }
    }
};
