class Solution{
    public:
    int maxSweetness(vector<int>& arr, int N, int K) {
        int sum = 0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        int l = 0;
        int h = sum;
        int ans = INT_MIN;
        int mid;
        while(l<=h)
        {
            mid = (l+h)>>1;
            int ct = K+1;
            int sm = 0;
            int i=0;
            while(i<N)
            {
                sm+=arr[i];
                if(sm>=mid)
                {
                    ct--;
                    sm=0;
                }
                i++;
            }
            if(ct<=0)
            {
                l = mid+1;
                ans = max(ans,mid);
            }
            else{
                h = mid-1;
            }
            
        }
        return ans;
    }
};
