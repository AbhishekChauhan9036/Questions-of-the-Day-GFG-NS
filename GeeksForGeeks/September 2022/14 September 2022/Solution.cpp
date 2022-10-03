class Solution{
public:
    long long numberOfSubsequences(int N, long long A[]){
        long long count = 0;
        long long mod = 1e9 + 7;
        for (int i = 0; i < N; i++){
            if ((A[i] & A[i] - 1) == 0)
                count++;}
        long long ans = 1;
        while (count--){
            ans = (ans * 2) % mod;}
        return ans - 1;}
};