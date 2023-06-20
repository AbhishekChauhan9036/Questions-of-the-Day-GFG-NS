
class Solution {
   public:
    const long long mod = 1e9+7;
    int sumOfNaturals(int n) {
        // code here
        return ((n%mod*(n+1)%mod)%mod/2)%mod;
    }
};

