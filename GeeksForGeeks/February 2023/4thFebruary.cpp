
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
     // code here
     int dp[n];
     if(n==1) return arr[0];
     if(n==2) return max(arr[0],arr[1]);
     dp[0]=arr[0];
     dp[1]=max(arr[1],arr[0]);
     for(int i=2;i<n;i++){
         dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
     }
     return dp[n-1];
 }
};
