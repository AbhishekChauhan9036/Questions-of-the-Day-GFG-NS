class Solution{
public:
        unordered_map<string, int> mp;
    
    string helper(Node* root) {
        if(root->children.size() == 0) {
            string str = to_string(root->data);
            mp[str]++;
            return str;
        }
        
        vector<Node*> temp = root->children;
        sort(temp.begin(), temp.end(), [](Node* left, Node* right) {
            return left->data < right->data; 
        });

        string res = "";
        bool first = true;
        for(auto child: temp) {
            string curr = helper(child);
            res += "(" + curr + ")";
        }
        
        res += to_string(root->data);
        mp[res]++;
        
        return res;
    }

    int duplicateSubtreeNaryTree(Node *root){
        // Code here
        if(!root) return 0;
        helper(root);
        int cnt = 0;
        for(auto it: mp) {
            if(it.second > 1) cnt++;
        }
        return cnt;
    }
};
