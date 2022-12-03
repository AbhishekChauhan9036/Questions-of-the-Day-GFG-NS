
// User function Template for Java
class Solution {
   public static int solve(int n, int k, int[] stalls) {
        Arrays.sort(stalls);
        int lo=0,hi=stalls[stalls.length-1];
        int ans=0;
        while(lo<=hi) {
            int mid = lo+(hi-lo)/2;
            if(isValid(stalls,k,mid)) {
                ans = Math.max(ans,mid);
                lo=mid+1;
            } else {
                hi=mid-1;
            }
        }
        return ans;
    }
    
    public static boolean isValid(int[] a,int k,int dis) {
        int pidx=0;
        for(int i=1;i<a.length;i++) {
            if(a[i]-a[pidx]>=dis) {
                k--;
                pidx=i;
            }
        }
        return k<=1;
    }
   
   
}
