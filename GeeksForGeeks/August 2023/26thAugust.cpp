class Solution{
  public:
    int longestKSubstr(string s, int k) {
    unordered_map<char,int>mp;
    int i=0,j=0,ans=INT_MIN;
    for(int j=0;j<s.size();j++){
        mp[s[j]]++;
        if(mp.size()==k)
            ans=max(ans,j-i+1);
        else if(mp.size()>k){
            while(mp.size()!=k){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
        }
    }
    return ans==INT_MIN?-1:ans;
    }
};
