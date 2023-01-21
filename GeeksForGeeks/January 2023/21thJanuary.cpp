class Solution {
  public:
    int minVal(int a, int b) {
        int cnt = 0, x = 0;
        while(b > 0)  {
            
            if(b%2 > 0) cnt++;
            b /= 2;
        }
        for(int i = 31; i >= 0 && cnt > 0; i--) 
        {
            int mask = 1 << i;
            if(a&mask) {
                x |= mask;
                cnt--;
            }
        }
        for(int i = 0; i <= 31 && cnt > 0; i++) 
        {
            int mask = 1 << i;
            if((a&mask) == 0) {
                x |= mask;
                cnt--;
            }
        }
        return x;
        
    }
};
