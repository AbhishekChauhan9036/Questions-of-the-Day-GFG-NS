class Solution{
    private:
    
    int dx[4] = {-1,0,1,0};
    int dy[4] = {0,1,0,-1};
    
    int dfs(vector<vector<char>> &mat,vector<vector<int>> &vis,int x,int y,int n,int m,string &target,int idx){
        
        if(idx == target.size())
            return 1;
        
        vis[x][y] = 1;
        
        int cnt = 0;
        
        for(int i=0;i<4;i++){
            int newx = dx[i] + x;
            int newy = dy[i] + y;
            
            if( newx<n && newy<m && newx>=0 && newy>=0 && !vis[newx][newy] && mat[newx][newy] == target[idx] ){
                cnt += dfs(mat,vis,newx,newy,n,m,target,idx+1);
                vis[newx][newy] = 0;
            }
        }
        
        return cnt;
        
    }
    public:
    int findOccurrence(vector<vector<char> > &mat, string target){
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        char ch = target[0];
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ch == mat[i][j]){
                    ans += dfs(mat,vis,i,j,n,m,target,1);
                    vis[i][j] = 0;
                }
            }
        }
        return ans;
    }
};