class Solution{
   public int totalWays(int n, int[] capacity) {
        Arrays.sort(capacity);

        long ans = 1;

        long mod = 1000000007;

        int fill = 0;

        for(int i = 0; i < n; i++){

            ans = ans * (capacity[i] - fill);

            ans = ans%mod;

            fill++;

        }

        return (int)ans;

    }
}

