class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        // code here
    
        stack<int> stk;
        map<int, Node*> mp;
        
        
        for(int i = 0; i < str.length(); i++) {
            
            if(str[i] == ')') {
                
                int child = stk.top();
                Node* chd;
                if(mp.find(child) == mp.end())
                    chd = new Node(child);
                else 
                    chd = mp[child];
                    
                stk.pop(); stk.pop();
                
                int parent = stk.top();
                
                if(mp.find(parent) == mp.end()) {
                    Node* par = new Node(parent);
                    par->left = chd;
                    mp[parent] = par;
                }
                else {
                    Node* par = mp[parent];
                    par->right = chd;
                }
            }
            else {
                int num = 0;
                if(str[i] == '(') {
                    stk.push(-1);
                }
                else {
                    while(isdigit(str[i])) {
                        num = num*10 + (str[i]-'0');
                        i++;
                    }
                    i--;
                    stk.push(num);
                }
                
            }
            
        }
        if(mp.size() == 0) return new Node(stk.top());
        return mp[stk.top()];
    }
};
