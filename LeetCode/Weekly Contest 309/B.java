
class Solution {
    
    
    
    public int numberOfWays(int __abc, int __uyt, int k) {
        int __ttt=Math.abs(__abc-k);
        int[][] __newrty=new int[__abc+__ttt+k+1][k];
        for(int[] i:__newrty)Arrays.fill(i,-1);
        return mohan(__abc,__uyt,k,__newrty,__ttt);
    }

    public int mohan(int s,int e,int k,int[][] dp,int b){
        if(s==e && k==0)return 1;
        if(k==0 )return 0;k-=1;
        if(dp[s+b][k]!=-1){
            return dp[s+b][k];
        }
        int left=mohan(s-1,e,k,dp,b);
        int right=mohan(s+1,e,k,dp,b);

        return dp[s+b][k]=(left+right)%1000000007;
    }
}