class Solution{
public:
    long long findNumber(long long N){
        // Code here
        int odd[] = {1,3,5,7,9};
        long long temp = 4*N+5;
        long long i=0;
        long long temp1 = 1;
        while(temp1<temp&&++i) temp1 = temp1*1ll*5;
        i = i-2;
        long long num = (5*1ll*((temp1/25)-1))/4;
        long long rem = N-num;
        if(rem==0){
            long long ans = 0;
            while(i--)
            {
                ans = ans*10+odd[4];
            }
            return ans;
        } 
        else
        {
            i = i+1;
            long long ans = 0;
            while(i>=1)
            {
                long long p1 = (long long)pow(5,i-1);
                int index = rem/p1;
                if(rem%p1==0)
                {
                    index--;
                    rem = p1;
                    ans = ans*10+odd[index];
                }
                else
                {
                    rem = rem%p1;
                    if(i==1) ans = ans*10+odd[index-1];
                    else ans = ans*10+odd[index];
                }
                i--;
            }
            return ans;
        }
    }
};
