class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        int res = INT_MIN;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            int sum = 0;
            while(size--){
                Node* node = q.front();
                q.pop();
                sum += node -> data;
                if(node -> left)
                    q.push(node -> left);
                if(node -> right)
                    q.push(node -> right);
            }
            res = max(sum, res);
        }
        return res;
    }
};
