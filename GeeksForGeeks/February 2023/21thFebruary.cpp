class Solution{   
public:

    bool isValidCell(int r, int c, int n, int m)
    {
        return (r >= 0 && c >= 0 && r < n && c < m);
    }

    int minIteration(int N, int M, int x, int y){    
        // code here
        vector<vector<int>> vis(N, vector<int> (M, 0));
        
        queue<pair<pair<int, int>, int>> q;
        q.push({{x-1, y-1}, 0});
        vis[x-1][y-1] = 1;
        
        int ans = 0;
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int level = q.front().second;
            q.pop();
            vis[r][c] = 1;
            
            ans = max(ans, level);
            for(int i = 0; i < 4; i++)
            {
                int nrow = r + dx[i];
                int ncol = c + dy[i];
                
                if(isValidCell(nrow, ncol, N, M))
                {
                    if(!vis[nrow][ncol])
                    {
                        vis[nrow][ncol] = 1;
                        q.push({{nrow, ncol}, level+1});
                    }
                }
            }
        }
        return ans;
    }
};
