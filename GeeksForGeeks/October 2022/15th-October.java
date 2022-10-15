class Pair
{
    int x, y;
    
    Pair(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
}

class Solution {
    
    private static boolean isValid(int x, int y, int grid[][])
    {
        int n = grid.length;
        int m = grid[0].length;
        
        return x>=0 && y>=0 && x<n && y<m && grid[x][y] == 1;
    }
    
    int shortestPath(int[][] grid, int[] source, int[] destination) {
        
        Queue<Pair> queue = new ArrayDeque<>();
        
        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};
        
        queue.add(new Pair(source[0], source[1]));
        
        int steps = 0;
        
        while(queue.isEmpty()==false)
        {
            int n = queue.size();
            
            for(int i=0; i<n; i++)
            {
                Pair p = queue.poll();
                
                grid[p.x][p.y] = -1;
                
                if(p.x==destination[0] && p.y==destination[1]) return steps;
                
                for(int j=0; j<4; j++)
                {
                    int nx = p.x + dx[j];
                    int ny = p.y + dy[j];
                    
                    
                    if(isValid(nx, ny, grid))
                    {
                        grid[nx][ny] = -1;
                        queue.add(new Pair(nx, ny));
                    }
                    
                }
                
            }
            
            steps++;
            
        }
        
        return -1;
        
        
    }
}