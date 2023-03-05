class Solution {
  public:
    
    int adj[1005];
    
    int find_set(int v) {
        if (v != adj[v]){
            return adj[v] = find_set(adj[v]);
        }
        return adj[v];
    }

    vector<string> avoidExplosion(vector<vector<int>> mix, int n,vector<vector<int>> danger, int m) {
   
        for (int i=1; i<=n; i++){
            adj[i]=i;
        }
        
        vector<string> ans;
        
        for (int i=0; i<n; i++){
            int a=mix[i][0];
            int b=mix[i][1];
            
            bool flag=true;
            int x2=find_set(a);
            int y2=find_set(b);
            
            for (int j=0; j<m; j++){
                int x1=find_set(danger[j][0]);
                int y1=find_set(danger[j][1]);
                
                
                if ((x2==x1 && y2==y1) || (x2==y1 && y2==x1)){
                    flag=false;
                    break;
                }
            }
            
            if (flag){
                adj[x2]=y2;
                ans.push_back("Yes");
            }
            else{
                ans.push_back("No");
            }
        }
        
     return ans;
    }
};
