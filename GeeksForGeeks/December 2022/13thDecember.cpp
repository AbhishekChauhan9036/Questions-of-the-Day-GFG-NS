

class Solution {
  public:
      int splitArray(int arr[] ,int n, int K) {
        // code here
        int l=0,r=0;
        for(int it=0;it<n;it++)
        {
            l=max(arr[it],l);
            r+=arr[it];
        }
        while(l<=r)
        {
            int mid=(l+r)/2;
            int count=0,sum=0;
            for(int i=0;i<n;i++)
            {
                if(sum+arr[i]>mid)
                {
                    sum=0;
                    count++;
                }
                sum+=arr[i];
                if(count>K)
                break;
            }
            if(count<K)
            r=mid-1;
            else
            l=mid+1;
        }
        return l;
    }
};
