class Solution{   
public:
   long long int fun(int r[],int g[],int b[],int prev,int ind,vector<vector<long long int>> &dp,int n){
        if(ind>=n){
            return 0;
        }
        if(dp[ind][prev]!=-1){
            return dp[ind][prev];
        }
        // 3 cases
        long long int c1=1e12;
        if(prev!=0){
            c1 = r[ind] + fun(r,g,b,0,ind+1,dp,n);
        }
        long long int c2=1e12;
        if(prev!=1){
            c2 = g[ind] + fun(r,g,b,1,ind+1,dp,n);
        }
        long long int c3=1e12;
        if(prev!=2){
            c3 = b[ind] + fun(r,g,b,2,ind+1,dp,n);
        }
        return dp[ind][prev] = min(c1,min(c2,c3));
    } 
    long long int distinctColoring(int n, int r[], int g[], int b[]){
        
        // code here 
        // 3 - no color 
        // 2 - blue
        // 1 - green
        // 0 - red
        vector<vector<long long int>> dp(n,vector<long long int> (4,-1));
        fun(r,g,b,3,0,dp,n);
        return dp[0][3];
    }
};
