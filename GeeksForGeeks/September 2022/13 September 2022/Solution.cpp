//.................................
class Solution{
  public:
    vector<int> v;
    void inorder(Node * root) {
        if(!root)   return;

        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    void Convert(Node * root) {
        if(!root)   return;

        root->data = v.back();  v.pop_back();

        Convert(root->right);
        Convert(root->left);
    }
    void convertToMaxHeapUtil(Node* root) {
        inorder(root);
        Convert(root);
    }

};
