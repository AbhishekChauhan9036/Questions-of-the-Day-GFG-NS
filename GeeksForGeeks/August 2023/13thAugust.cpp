int mod = 1e9+7;
    int nthFibonacci(int n){
        int prev = 0, cur =1, nxt;
        for(int i=0 ;i<n-1 ;i++){
            nxt = (prev + cur)%mod;
            prev = cur;
            cur = nxt;
        }
        return cur;
    }
