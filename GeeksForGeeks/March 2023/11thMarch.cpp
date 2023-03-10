
class Solution {
  public:
    vector<int> solveQueries(int n, int num, vector<int> &a, vector<vector<int>> &q) {
        // code here
        map<int,int>mp;
        
        vector<int>b=a;
        for(int i=0;i<n;i++){
            mp[a[i]]+=b[i];
            b[i]=mp[a[i]];
        }
        vector<int>ans;
        for(int i=0;i<num;i++){
     int c=0;
            int l=q[i][0];
            int r=q[i][1];
            int k=q[i][2];
            for(int j=l;j<=r;j++){
                if((mp[a[j]]-b[j])/a[j]==k-1)c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};
