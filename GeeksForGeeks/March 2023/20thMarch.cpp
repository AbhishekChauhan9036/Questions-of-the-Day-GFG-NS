class Solution {
  public:
   int shortestXYDist(vector<vector<char>> grid, int n, int m) {
        // code here
        int mini=1e9;
        
        vector<vector<bool>> vis(n,vector<bool> (m,false));
        
        queue<pair<pair<int,int>,int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'){
                   q.push({{i,j},0});
                   vis[i][j]=true;
                }
            }
        }
        
        while(!q.empty()){
            int count=q.size();
            
            for(int k=0;k<count;k++){
            auto curr=q.front();
            q.pop();
            
            auto p=curr.first;
            int len=curr.second;
            
            int i=p.first,j=p.second;
            
            if(grid[i][j]=='Y'){
                return len;
            }
            
            if(i-1>=0 and !vis[i-1][j]){
                q.push({{i-1,j},len+1});
                vis[i-1][j]=true;
            }
            if(j-1>=0 and !vis[i][j-1]){
                q.push({{i,j-1},len+1});
                vis[i][j-1]=true;
            }
            if(i<=n-2 and !vis[i+1][j]){
                q.push({{i+1,j},len+1});
                vis[i+1][j]=true;
            }
            if(j<=m-2 and !vis[i][j+1]){
                q.push({{i,j+1},len+1});
                vis[i][j+1]=true;
            }
            
        }
        }
        
        return mini;
    }
};
