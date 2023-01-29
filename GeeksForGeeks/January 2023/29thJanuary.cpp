class Solution {
  public:
       int solve(int a, int b) {
        if(a==b)return 0;
        if((a & b) == a || (a & b) == b)return 1;
        
    return 2;
    }

};
