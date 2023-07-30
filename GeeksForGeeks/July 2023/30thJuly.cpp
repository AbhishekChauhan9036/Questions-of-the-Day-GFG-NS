class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node* hello(Node* root,Node* x,Node* ans){
        
        if(!root)return ans;
        if(root->data<=x->data){
            hello(root->right,x,ans);
        }
        else{
        ans=root;
        hello(root->left,x,ans);
        }
      
       }
    
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
       Node* ans = NULL;
        return hello(root,x,ans);
    }
};
