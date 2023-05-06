
class Solution {
  public:
    int dp[101][1001];
    bool solve(int N, int K, int target, vector<int> &coins){
        if(target<0) return false;
        if(target == 0 && K==0){
            return dp[K][target] = 1;
        }
        if(K == 0) return false;
        if(N<=0) return false;
        if(dp[K][target] != -1) return dp[K][target];
        bool left = solve(N, K-1, target-coins[N-1], coins);
        bool right = solve(N-1,K,target,coins);
        
        dp[K][target] = left || right;
        
        return dp[K][target];
    }

    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        memset(dp, -1, sizeof(dp));
        
        
        return solve(N,K,target,coins);
        
        //OR 
        
        
        return dp[0][0] == 1?true:false;
    }
};
