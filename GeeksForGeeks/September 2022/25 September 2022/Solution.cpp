class Solution {
  public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        vector<vector<int>>matrix(n,vector<int>(n,0));
        for(int q=0;q<Queries.size();q++) {
            int xi=Queries[q][0],yi=Queries[q][1],xf=Queries[q][2],yf=Queries[q][3];
            for(int i=xi;i<=xf;i++) {
                matrix[i][yi]++;
               if(yf+1<n)matrix[i][yf+1]--;
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=1;j<n;j++) {
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        return matrix;
    }
};