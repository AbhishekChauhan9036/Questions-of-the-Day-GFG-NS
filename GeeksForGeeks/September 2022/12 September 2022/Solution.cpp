class Solution {
public:
int MinimumExchange(vector<vector<char>>matrix){
    int ans1=0,ans2=0;
    char c[2]={'A','B'};
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[i][j]!=c[(i+j)&1]) ans1++;
            if(matrix[i][j]!=c[(i+j+1)&1]) ans2++;
        }
    }
    return min(ans1,ans2);
}

};
