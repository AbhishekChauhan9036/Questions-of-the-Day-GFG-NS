class Solution {
  public:
    vector<int> ans;
    void solve(int arr[],int start, int end,int n)
    {
        if(start>end || start>=n)
            return;
        if(start==end)
        {
            ans.push_back(arr[start]);
            return;
        }
        int idx=end+1;
        for(int j=start+1;j<=end;j++)
        {
            if(arr[j]>arr[start])
            {
                idx=j;
                break;
            }
        }
        solve(arr,start+1,idx-1,n);
        solve(arr,idx,end,n);
            
    }
    vector<int> leafNodes(int arr[],int N) {
        // code here
        ans.clear();
        solve(arr,0,N-1,N);
        return ans;
    }
};