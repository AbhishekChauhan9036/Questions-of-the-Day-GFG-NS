class Solution{
    public:
    #define ll long long
    ll mod = 1000000007;
    ll binpow(ll x,ll y){
        ll ans = 1LL;
        while(y){
            if(y & 1LL){
                ans *= x;
            }
            x = (x * x);
            y >>= 1LL;
        }
        return ans;
    }
    int numOfWays(int n, int x)
    {
        // code here
        vector<ll>dp(n+1,0);
        dp[0] = 1LL;
        for(ll j = 1; j <= n; j++){
            for(ll i = n; i >= 1; i--){
                ll val = binpow(j,(ll)x);
                if(val <= i){
                    dp[i] += dp[i-val];
                    dp[i] %= mod;
                }
            }
        }
        return dp[n];
    }
};



