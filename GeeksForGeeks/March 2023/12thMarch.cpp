class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        int maxcount =0, maxrow=0;
        for(int i=0;i<n;i++){
           int count = 0;
           int index = lower_bound(mat[i].begin(),mat[i].end(),1) - mat[i].begin();
           count = n-1-index +1;
           if(count > maxcount){
               maxcount = count;
               maxrow = i;
           }
           
        }
        vector<int>v = {maxrow,maxcount};
        return v;
    }
};
