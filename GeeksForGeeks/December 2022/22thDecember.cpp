class Solution{
public:
       long long int findSubarray(vector<long long int> &arr, int n ) {
        unordered_map<int,int>m;
        long long count=0,sum=0;
        for(int i=0;i<n;i++)
        {
            m[sum]++;
            sum+=arr[i];
            count+=m[sum];
        }
        return count;
    }
};
