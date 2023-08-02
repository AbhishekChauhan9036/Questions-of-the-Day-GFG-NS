
class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
                vector<vector<int>>vis(N,vector<int>(M,0));
        
        queue<pair<int,pair<int,int>>>q;
        
        if(A[0][0]==0) return -1;
        
        if(X==0 && Y==0) return 0;
        q.push({1,{0,0}});
        
        vis[0][0]=1;
        while(!q.empty())
        {
            
            int dis=q.front().first;
            int x=q.front().second.first;
            int y=q.front().second.second;
            q.pop();
              
            int row[]={-1,0,1,0};
            int col[]={0,1,0,-1};
            
            for(int  i=0;i<4;i++)
            {
                int nrow=x+row[i];
                int ncol=y+col[i];
                 
                 
                if(nrow>=0 && nrow<N && ncol>=0 && ncol<M && vis[nrow][ncol]!=1 && A[nrow][ncol]==1)
                {
                    if(nrow==X && ncol ==Y) return dis;
                     vis[nrow][ncol]=1;
                    q.push({dis+1,{nrow,ncol}});
                }
            }
            
        }
        
        return -1;
    }
};
