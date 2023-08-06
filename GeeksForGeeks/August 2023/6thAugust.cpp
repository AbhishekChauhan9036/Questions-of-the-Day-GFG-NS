class Solution{
    public:
    //Complete this function
    void helper(string &S, vector <string> &ans, string &ds,int map[])
    {
        if(ds.size() == S.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i{0}; i < S.size(); ++i)
        {
            if(!map[i])
            {
                ds.push_back(S[i]);
                map[i] = 1;
                helper(S,ans,ds,map); 
                ds.pop_back();
                map[i] = 0;
                
            }
        }
    }
    vector<string> permutation(string S)
    {
        int n = S.size();
        vector <string> ans;
        string ds;
        int map[n] = {0};
        helper(S,ans,ds,map);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
