void connect(Node *root) {
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()) {
            Node *t=q.front();
            q.pop();
            if(t) {
                if(!q.empty()) t->nextRight=q.front();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            else if(q.size()) q.push(NULL);
        }
    }
