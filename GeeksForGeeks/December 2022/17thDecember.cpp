class Solution{   
public:
    long long int waysToBreakNumber(long long int N){
        // code here
        long long mod =1e9+7;
        return ( (N + 1) * (N + 2) / 2 ) % mod;
    }
};
