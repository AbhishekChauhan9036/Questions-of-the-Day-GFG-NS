// 07 OCT
class Solution {
    public:
    void flatten(Node root) {
        if(root) {
            Node leftptr=root->left;
            Node * rightptr=root->right;
            root->left=NULL;
            flatten(leftptr);
            flatten(rightptr);
            root->right=leftptr;
            Node *curr=root;
            while(curr->right) curr=curr->right;
            curr->right=rightptr; } } };