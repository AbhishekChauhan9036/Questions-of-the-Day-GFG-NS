

class Solution{

	public:
    int perfectSum(int arr[], int n, int sum)
    {
        vector<int> dp(sum + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < n; i++) {
            for (int j = sum; j >= arr[i]; j--) {
                dp[j] += dp[j - arr[i]];
                dp[j] %= 1000000007;  // Modulo to avoid integer overflow
            }
        }
        return dp[sum];
    }
	  
};


