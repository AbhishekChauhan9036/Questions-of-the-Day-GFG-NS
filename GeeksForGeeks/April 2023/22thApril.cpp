class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        vector<long long int>v(n,0);
        vector<pair<long long int,long long int>>vec;
        long long int i;
        for(i=0;i<n;i++)
        vec.push_back({arr[i],i});
        sort(vec.begin(),vec.end());
        unordered_map<long long int,long long int >m1;
        long long int s=0;
        for(i=0;i<n;i++)
        {
            m1[vec[i].first]++;
            long long int p;
            s+=vec[i].first;
            p=s-m1[vec[i].first]*arr[vec[i].second];
            v[vec[i].second]=p;
        }
        return v;
    }
};
