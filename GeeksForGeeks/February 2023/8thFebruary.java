class Solution {
    long[] countZero(int n, int K, int[][] arr){
        long[] ans = new long[K];
        HashSet<Integer> hr = new HashSet<>();
        HashSet<Integer> hc = new HashSet<>();
        for(int i=0; i<K; i++){
            hr.add(arr[i][0]-1);
            hc.add(arr[i][1]-1);
            ans[i]= n*n-(hr.size()*n+hc.size()*(n-hr.size()));
        }
        return ans;
    }
}
