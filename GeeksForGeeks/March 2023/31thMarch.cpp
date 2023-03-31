class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            int prev=0;
            for(int i=1;i<n;i++)
            {
                if(a[i]%2==a[i-1]%2)// odd odd or even even
                    continue;
                else // previous group was a group that can be sorted
                {
                     sort(a.begin()+prev,a.begin()+i,greater<int>{});
                     prev=i; // new group starting here
                }
            }
            sort(a.begin()+prev,a.end(),greater<int>{});
            return a;
        }
};
