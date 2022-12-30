class Solution {
private:

    bool checksubtree(const Node* root, const int value) {
    	if (root->data != value) return false;
    	if (root->left != NULL) {
		    if (!checksubtree(root->left, value)) return false;
	    }
	    if (root->right != NULL) {
    		if (!checksubtree(root->right, value)) return false;
    	}
    	return true;
    }

    void adjust(const Node* root, int& count) {
    	if (checksubtree(root, root->data)) count++;
    	if (root->left != NULL) adjust(root->left, count);
    	if (root->right != NULL) adjust(root->right, count);
    }

public:
    int singlevalued(Node *root) {
    	int count = 0;
    	adjust(root, count);
    	return count;
    }
    
};
