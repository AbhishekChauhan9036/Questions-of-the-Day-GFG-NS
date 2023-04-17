class Solution 
{
    public:
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        if(a.first<b.first) return false;
        if(a.first==b.first)
        {
            if(a.second>b.second) return false;
            else if(a.second==b.second) return false;
            else return true;
        }
        return true;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<pair<int,int>> refer;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            refer.push_back({arr[i].profit,arr[i].dead});
            maxi = max(maxi,arr[i].dead);
        }
        sort(refer.begin(),refer.end(),comp);
        long long profitans=0;
        int count=0;
        vector<int> hash(maxi,0);
        for(int i=0;i<n;i++)
        {
            int profit = refer[i].first;
            int deadline = refer[i].second;
            for(int ind=deadline-1;ind>=0;ind--)
            {
                if(hash[ind]==0)
                {
                    count++;
                    profitans+=profit;
                    hash[ind]=1;
                    break;
                }
            }
        }
        return {count,profitans};
    } 
};
