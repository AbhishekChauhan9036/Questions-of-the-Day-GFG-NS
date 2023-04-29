class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        map<int,int> mp;
        for(int i = 0;i<intervals.size();i++){
            mp[ intervals[i][0] ]++;
            mp[ intervals[i][1] + 1]--;
        }
        int maxno = -1,sum = 0;
        for(auto it:mp){
            if(it.second<0 && sum>=k){
                maxno = it.first - 1;
            }
            sum+=it.second;
        }
        return maxno;
    }
};
