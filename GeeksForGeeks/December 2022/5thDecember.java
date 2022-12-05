

class Solution {
    static int shotestPath(int[][] mat, int n, int m, int k) {
        int[][] dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        boolean[][][] visited = new boolean[n][m][k + 1];
        Queue<int[]> q = new LinkedList<>();
        
        q.offer(new int[] {0, 0, k});
        
        int steps = 0;
        
        while (!q.isEmpty()) {
            int size = q.size();
            
            while (size-- > 0) {
                int[] curr = q.poll();
                
                // if curr is destination, return steps
                if (curr[0] == n - 1 && curr[1] == m - 1) {
                    return steps;
                }

                // traverse through valid cells
                for (int[] d : dir) {
                    int i = curr[0] + d[0];
                    int j = curr[1] + d[1];
                    int obs = curr[2];

                    // check if position inside bounds
                    if (i >= 0 && i < n && j >= 0 && j < m) {
                        // if cell is empty, visit the cell and add it in queue
                        if (mat[i][j] == 0 && !visited[i][j][obs]) {
                            q.offer(new int[] {i, j, obs});
                            visited[i][j][obs] = true;
                        }
                        // if cell has obstacle and we can eliminate it, visit it and add it in queue
                        // decrement 'obstacle eliminations left that can be performed'
                        else if (mat[i][j] == 1 && obs > 0 && !visited[i][j][obs - 1]) {
                            q.offer(new int[]{i, j, obs - 1});
                            visited[i][j][obs - 1] = true;
                        }
                    }
                }
            }
            
            steps++;
        }
        
        return -1;
    }
};
