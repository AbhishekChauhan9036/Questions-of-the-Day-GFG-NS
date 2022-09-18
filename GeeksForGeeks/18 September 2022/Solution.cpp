class Solution {
  public:
    int Count(int L, int R){
        vector<int>soe(R+1,-1) ;
        soe[1] = 0 ;
        for(int i = 2 ; i <= sqrt(R) ; i++) {
            for(int j = 2*i ; j < R+1 ; j += i ) { soe[j] = 1 ;}}
        int ans = 0 ;
        for(int i = L ; i < R+1 ; i++) ans += soe[i] ;
        return ans ;}
};