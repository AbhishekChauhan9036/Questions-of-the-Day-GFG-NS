class Solution {
  public:
    long long int minOperations(int N) {
        long long int ans , x ;
        int i = 0 , j = N-1 ;
        x = N/2 ;
        if(N%2!=0)
        ans = (x*(x+1)) ;
        else
        ans = x*x ;
        return ans ;
    }
};
