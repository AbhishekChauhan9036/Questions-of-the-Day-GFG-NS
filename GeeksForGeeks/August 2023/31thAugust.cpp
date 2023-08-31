int height(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return root->height;
}

int getBalanceFactor(Node* n) {
    if (n == NULL) {
        return 0;
    }
    return height(n->left) - height(n->right);
}

Node* leftRotate(Node* root) {
    Node* newMid = root->right;
    Node* temp = newMid->left;

    // rotation
    newMid->left = root;
    root->right = temp;

    // updating height
    root->height = max(height(root->left), height(root->right)) + 1;
    newMid->height = max(height(newMid->left), height(newMid->right)) + 1;

    // return new root after rotation
    return newMid;
}

Node* rightRotate(Node* root) {
    Node* newMid = root->left;
    Node* temp = newMid->right;

    // rotation
    newMid->right = root;
    root->left = temp;

    // updating height
    root->height = max(height(root->left), height(root->right)) + 1;
    newMid->height = max(height(newMid->left), height(newMid->right)) + 1;

    // return new root after rotation
    return newMid;
}

Node* inorderSucc(Node* root) {
    Node* curr = root;
    while (curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

Node* deleteAVL(Node* root, int val) {
    // Normal BST deletion
    if (root == NULL) {
        return NULL;
    }

    if (val < root->data) {
        root->left = deleteAVL(root->left, val);
    } else if (val > root->data) {
        root->right = deleteAVL(root->right, val);
    } else {
        // Node has no child
        if (root->left == NULL and root->right == NULL) {
            return NULL;
        }

        // Node with only one child or no child
        else if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor
        // (smallest in the right subtree)
        Node* temp = inorderSucc(root->right);

        // Copy the inorder successor's content to this Node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteAVL(root->right, temp->data);
    }

    if (root == NULL) {
        return root;
    }

    // 2. Update height of ancestor Node
    root->height = max(height(root->left), height(root->right)) + 1;

    // 3. Get the balance factor of the ancestor
    int balance = getBalanceFactor(root);

    // if balanced then simply return
    if (balance <= 1 && balance >= -1) {
        return root;
    }

    // if current Node is unbalanced, then
    // check for 4 cases

    // Left Left case
    if (balance > 1 && getBalanceFactor(root->left) >= 0) {
        return rightRotate(root);
    }

    // Left Right Case
    if (balance > 1 && getBalanceFactor(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && getBalanceFactor(root->right) <= 0) {
        return leftRotate(root);
    }

    // Right Left Case
    if (balance < -1 && getBalanceFactor(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
}

Node* deleteNode(Node* root, int data) {
    return deleteAVL(root, data);
}
