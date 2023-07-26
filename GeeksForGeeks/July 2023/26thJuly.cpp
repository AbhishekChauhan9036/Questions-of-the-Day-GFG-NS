int kthAncestor(Node *root, int k, int node)
{
    map<Node*,Node*> parent;
    parent[root] = NULL;
    queue<Node*> q;
    q.push(root);
    while (!q.empty() && q.front()->data != node) {
        Node *temp = q.front();
        q.pop();
        if (temp->left) {
            q.push(temp->left);
            parent[temp->left] = temp;
        }
        if (temp->right) {
            q.push(temp->right);
            parent[temp->right] = temp;
        }
    }
    Node *temp=q.front();  // Since it is given in question that the node exists in the tree
    while (k-- && temp) {
        temp = parent[temp];
    }
    if (temp) {
        return temp->data; // As temp will be Null if k > height of the tree
    }
    return -1;
}
