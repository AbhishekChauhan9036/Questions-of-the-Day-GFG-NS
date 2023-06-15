
class Solution {
  public:
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        // code here
        unordered_map<int,int> mn,mx;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(mn.find(types[i])==mn.end()){
                mn[types[i]]=INT_MAX;
            }
            if(mx.find(types[i])==mx.end()){
                mx[types[i]]=INT_MIN;
            }
            mn[types[i]]=min(mn[types[i]],locations[i]);
            mx[types[i]]=max(mx[types[i]],locations[i]);
        }
        sort(types.begin(),types.end());
        v.push_back(types[0]);
        for(int i=1;i<n;i++){
            if(types[i]!=types[i-1]){
                v.push_back(types[i]);
            }
        }
        vector<vector<int>> vec(v.size()+2,vector<int>(2,0));
        for(int i=0;i<v.size();i++){
            vec[i+1][0]=mn[v[i]];
            vec[i+1][1]=mx[v[i]];
        }
        
        vector<vector<long long int>> dp(v.size()+2,vector<long long int>(2,0));
        for(int i=dp.size()-2;i>=0;i--){
            long long int dist=abs(vec[i][0]-vec[i][1]);
            dp[i][0]=dist+min(abs(vec[i][1]-vec[i+1][0])+dp[i+1][0],abs(vec[i][1]-vec[i+1][1])+dp[i+1][1]);
            dp[i][1]=dist+min(abs(vec[i][0]-vec[i+1][0])+dp[i+1][0],abs(vec[i][0]-vec[i+1][1])+dp[i+1][1]);
            
        }
        return min(dp[0][0],dp[0][1]);
        
    }
};
