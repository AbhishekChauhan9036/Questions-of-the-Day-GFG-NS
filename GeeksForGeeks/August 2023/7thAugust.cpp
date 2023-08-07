
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
   
   bool isSafe(int row,int col,int grid[][N],int val){
        //int n = sizeof(grid)/sizeof(grid[0]);
        int n=9;
        for(int i=0;i<n;i++){
            //check row
            if(grid[row][i]==val)
            return false;
            //check col
            if(grid[i][col]==val)
            return false;
            //check 3*3 matrix
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3] == val)
            return false;
        }
        return true;
    }
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])
    { 
        int n=9;
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                //empty cell
                if(grid[row][col] == 0){
                    //try inserting 1-9 values
                    for(int val=1;val<=9;val++){
                        if(isSafe(row,col,grid,val)){
                            grid[row][col] = val;
                            //solve other possibilities(recursion)
                            bool nextPossibleSol = SolveSudoku(grid);
                            if(nextPossibleSol){
                                return true;
                            }else{
                                //backtrack
                                grid[row][col] = 0;
                            }
                            
                        }
                    }
                    return false;
                }
                
            }
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
               cout<<grid[i][j]<<" ";
           }
       } 
    }
};
