class Solution{

    public:
    
    
    
   int ans;
    void make_mat(Node* root,  map<int,vector<int>> &adj){
        
        if(root->left!=NULL){
            adj[root->data].push_back(root->left->data);
            adj[root->left->data].push_back(root->data);
            make_mat(root->left, adj);
        }
        if(root->right!=NULL){
            adj[root->data].push_back(root->right->data);
            adj[root->right->data].push_back(root->data);
              make_mat(root->right, adj);
        }
        
        
    }
    void dfs(int node,int dept,int k, map<int,vector<int>> &adj,map<int,bool>&vis){
        vis[node]=true;
        if(dept<=k)
            ans+=node;
   
        for(auto child : adj[node]){
            if(!vis[child] and dept+1<=k){
                dfs(child,dept+1,k,adj,vis);
            }
        }
    }
    
    int ladoos(Node* root, int home, int k)
    {
        // Your code goes here
        map<int,vector<int>>adj;
        map<int,bool>vis;
        ans=0;
        make_mat(root,adj);
        
       
        dfs(home,0,k,adj,vis);
        
        return ans;
        
        
    }


};
