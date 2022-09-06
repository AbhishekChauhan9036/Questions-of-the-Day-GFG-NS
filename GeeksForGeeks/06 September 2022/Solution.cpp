class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        long long sum = 0, i = 0, j = 0;
        while(i < N)
        {
            sum += abs(A[i++] - B[j++]);
        }
        return sum;
    }
};