class Solution
{
    public:
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int numOfOp = 0;
        
        multiset<int> rowSum;
        for(int i = 0 ; i < n ; i++)
        {
            int temp = accumulate(matrix[i].begin(), matrix[i].end(), 0);
            rowSum.insert(temp);
        }
        
        int colSum = 0;
        for(int j = 0 ; j < n ; j++)
        {
            int tempSum = 0;
            for(int i = 0 ; i < n ;i++)
            {
                tempSum += matrix[i][j];
            }
            colSum = max(colSum,tempSum);
        }
        int m = max(*rowSum.rbegin(),colSum);
        for(auto it = rowSum.begin() ; it != rowSum.end() ;it++)
        {
            numOfOp += m - *it;
        }
        return numOfOp;
    } 
};
