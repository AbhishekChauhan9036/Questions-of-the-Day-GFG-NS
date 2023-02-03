class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        
        int n = matrix.size(), m = matrix[0].size();
        
        // right = 0, down = 1, up = 2, left = 3; 
        
        int i = 0, j = 0, direction = 0;
        
        while(1)
        {
            // storing the current indices, because we will use it if it is the exit point
            int or1 = i, or2 = j;
            
            if(matrix[i][j] == 0)
            {
                // we don't need to change the current direction, because matrix[i][j] == 0
                
                // now change the indices according to the current directions
                if(direction == 0)
                    j++;
                else if(direction == 1)
                    i++;
                else if(direction == 2)
                    i--;
                else if(direction == 3)
                    j--;
                if(i < 0 || j < 0 || i == n || j == m)
                    return make_pair(or1, or2);
            }
            
            else
            {
                // since matrix[i][j] == 1, change it to 0
                matrix[i][j] = 0;
                
                // change the directions as given
                if(direction == 0)
                    direction = 1;
                else if(direction == 1)
                    direction = 3;
                else if(direction == 2)
                    direction = 0;
                else if(direction == 3)
                    direction = 2;
                
                // now change the indices according to the current directions
                if(direction == 0)
                    j++;
                else if(direction == 1)
                    i++;
                else if(direction == 2)
                    i--;
                else if(direction == 3)
                    j--;
                if(i < 0 || j < 0 || i == n || j == m)
                    return make_pair(or1, or2);  
            }
        }
        
        // returning the dummy answer
        return {0, 0};
    }
};
