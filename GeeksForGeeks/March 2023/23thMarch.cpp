

class Solution{
public:
    // UNIQUE AND EASY SOLUTION
void solve(Node*root,int tar,Node*&res){
    
    if(!root) return;
    if(root->data == tar){
        
        res = root;
        
        return;
    }
    solve(root->left,tar,res);
    solve(root->right,tar,res);
    
}
void func(Node*root,int &s,Node*res){
    
    if(!root) return ;
    
    if(root->data == res->data) return ;
    
   
   if(root->data > res->data){
       
       s = s + root->data;
       func(root->left,s,res);
   }
   
   if(root->data < res->data){
       
       s = s + root->data;
       func(root->right,s,res);
   }
    
    
}
void sol(Node*root,int s1,int tar,vector<int>&v){
    
    if(!root) return;
    if(root->left == NULL and root->right == NULL){
        
        s1 = s1 + root->data;
    
    v.push_back(s1-tar);
    }
    
     
    
    sol(root->left,s1+root->data,tar,v);
    sol(root->right,s1+root->data,tar,v);
}
    int maxDifferenceBST(Node *root,int target){
        // Code here
        
        Node*res = new Node(-1);
        
        solve(root,target,res);
        if(res->data == -1) return -1;
        
        int s = 0;
        
        func(root,s,res);
       
        
        int s1 = 0;
        vector<int>v;
        
        sol(res,s1,target,v);
        if(v.size()==0) return s;
        int re = -1e9;
        bool ne = 1;
        
        for(auto i : v){
          
            int k = (s -i);
            
            re = max(re,k);
            
            
        }
        if(ne==0)re = re*-1;
        
        return re;
        
        
       
    }
};
