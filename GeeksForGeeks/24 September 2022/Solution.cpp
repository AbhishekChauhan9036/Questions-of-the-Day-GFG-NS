class Solution{
public:
int swapBitGame(long long n){
        int cnt = 0;

        while(n) {
            n = n&(n-1);
            cnt++;
        }

        return cnt%2 ? 1 : 2;
    }};