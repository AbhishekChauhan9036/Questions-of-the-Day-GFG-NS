class Solution
{
    public:
   bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int i = 0;i < n; i++) {
            m[arr[i]]++;
        }
        for(auto it = m.begin(); it!=m.end(); ++it) {
            s.insert(it->second);
        }
        if(m.size() == s.size()) return true;
        return false;
    }
};
