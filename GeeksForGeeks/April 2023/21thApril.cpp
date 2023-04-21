int prefixSuffixString(vector<string> &s1,vector<string> s2){
        int ans = 0;
        unordered_map<string,bool> mp;
        for(auto &val:s1)
        {
            for(int i=0;i<val.size();i++)
            {
                if(mp.find(val.substr(i)) == mp.end())
                mp[val.substr(i)] = 1;
            }
            for(int i=1;i<val.size();i++)
            {
                if(mp.find(val.substr(0,i)) == mp.end())
                mp[val.substr(0,i)]  = 1;
            }
        }
        for(auto &val:s2)
        {
            if(mp.find(val) != mp.end())
            ans++;
        }
        return ans;
    }
