class Solution {

public:

    const int mod = 1e9+7;

    int uniquePaths(int n, int m, vector<vector<int>> &grid) {

        int answer=0;

        vector<vector<int>> dp(n, vector<int>(m));

        if(0==grid[0][0]) return 0;

        

        dp[0][0]=1;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(grid[i][j]==0) continue;

                if(i>0) dp[i][j] = (dp[i][j] + dp[i-1][j])%mod;

                if(j>0) dp[i][j] = (dp[i][j] + dp[i][j-1])%mod;

            }

        }

        return dp[n-1][m-1];
    }
};
