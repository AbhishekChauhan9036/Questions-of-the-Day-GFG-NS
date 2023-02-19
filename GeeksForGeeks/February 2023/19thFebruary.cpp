
class Solution {
  public:
       void inorderTraversal(Node* root, vector<int>& v) {
        if (root == NULL) {
            return;
        }
        inorderTraversal(root->left, v);
        v.push_back(root->data);
        inorderTraversal(root->right, v);
    }

    void updateTree(Node* root, vector<int>& v, int& index) {
        if (root == NULL) {
            return;
        }
        updateTree(root->left, v, index);
        root->data = v[index++];
        updateTree(root->right, v, index);
    }

    Node* correctBST(Node* root) {
        // Step 1: Traverse the tree in inorder and store the values in a vector
        vector<int> v;
        inorderTraversal(root, v);
        sort(v.begin(), v.end());
        int index = 0;
        updateTree(root, v, index);

        return root;
    }
};
