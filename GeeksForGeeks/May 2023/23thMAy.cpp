class Solution{
  public:
    Node* cbt(int pre[],int ps,int pe,int preMirror[],int pms,int pme,unordered_map<int,vector<int>>&mt){
        if(ps>pe ||  pms > pme) return NULL;
        
        Node*root = new Node(pre[ps]);
        
        if(ps != pe && pms != pme){
            vector<int> r0 = mt[preMirror[pms+1]];
            int r = r0[0];
            r0.erase(r0.begin()+0);
            mt[preMirror[pms+1]] = r0;
            
            int numberLeft = r-ps-1;
            int numberRight = pe-r+1;
            
            root->left = cbt(pre,ps+1,ps+numberLeft,preMirror,pms+numberRight+1,pme,mt);
            root->right = cbt(pre,ps+numberLeft+1,pe,preMirror,pms+1,pme+numberRight,mt);
        }
        return root;
        
    }
    Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        // Code here
        unordered_map<int,vector<int>>mt;
        for(int i=0;i<size;i++){
            mt[pre[i]].push_back(i);
        }
        
        
        return cbt(pre,0,size-1,preMirror,0,size-1,mt);
        // return NULL;
    }
};
