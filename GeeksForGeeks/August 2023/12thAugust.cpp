
class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
     int longestSubsequence(int n, int a[])
    {
       
         vector<int> lis;
        
        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(lis.begin(), lis.end(), a[i]);
            if (it == lis.end())
                lis.push_back(a[i]);
            else
                *it = a[i];
        }
        
        return lis.size();
    }
};
