class Solution{   
public:
  int solve(vector<vector<int>> &colors, int i, int prevCol, vector<vector<int>>& dp)
    {
        int m = colors.size();
        if(i == m)
            return 0;
        
        if(dp[i][prevCol + 1] != -1)
            return dp[i][prevCol + 1];
        
        int cost = 0;
        int minCost = INT_MAX;
        for(int k = 0; k < 3; k++)
        {
            if(k != prevCol)
            {
                cost = colors[i][k] + solve(colors, i + 1, k, dp);
                minCost = min(minCost, cost);
            }
            
        }
        return dp[i][prevCol + 1] = minCost;
    }
    int minCost(vector<vector<int>> &colors, int N) {
        int m = colors.size();
        vector<vector<int>> dp(m, vector<int> (4, -1));
        return solve(colors, 0, -1, dp);
    }
};

