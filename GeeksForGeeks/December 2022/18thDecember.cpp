class Solution {
  public:
    long long maxGcd(int N) {
        // code here
        long long int ans = N * (N-1);
        int c=0;
        for(long long int i=N-2; i>2 && c<2; i--){
            if(__gcd(ans,i)==1){
            ans *= i;
            c++;
            }
        }
        return ans;
    }
};
