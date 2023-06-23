
class Solution {
  public:
       int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        vector<int>mp(26);
        int ans=0;
        for(auto &i:tasks){
            ans=max(ans,++mp[i-'A']);
        }
        int ct=0;
        for(int i=0;i<26;i++){
            if(ans==mp[i])ct++;
        }
        
        return max(((ans - 1) * (K + 1)) + ct,N);
    }
};


