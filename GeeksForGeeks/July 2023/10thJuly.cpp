
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& a, int n)
    { 
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                swap(a[i][j],a[j][i]);
        
    }
};
