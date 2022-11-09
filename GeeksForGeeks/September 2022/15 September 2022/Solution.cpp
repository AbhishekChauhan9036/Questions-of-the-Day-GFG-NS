class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        long long sum1 = 0 , sum2 = 0;
        int count = 0;
        sort(Arr.begin(),Arr.end());
        for(int i = 0 ; i < N ; i++) sum1 += Arr[i];
        for(int i = N-1 ; i >=0 ; i--){
            sum2 += Arr[i];
            sum1 -= Arr[i];
            count++;
            if(sum2 > sum1) break;
        }
        return count;
    }
};