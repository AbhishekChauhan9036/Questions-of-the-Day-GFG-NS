class Solution
{
    //Function to find distance of nearest 1 in the grid for each cell.
    private boolean isSafe(int[][] grid, int row, int col) {
		if (row < 0 || row >= grid.length || col < 0 || col >= grid[0].length || grid[row][col] != -1) {
			return false;
		}
		return true;
	}

	public int[][] nearest(int[][] grid) {
		Queue<int[]> queue = new LinkedList<>();
		for (int row = 0; row < grid.length; row++) {
			for (int col = 0; col < grid[0].length; col++) {
				if (grid[row][col] == 1) {
					grid[row][col] = 0;
					queue.offer(new int[] { row, col });
				} else {
					grid[row][col] = -1;
				}
			}
		}
		int[] dirX = { -1, 1, 0, 0 };
		int[] dirY = { 0, 0, -1, 1 };
		while (!queue.isEmpty()) {
			int size = queue.size();
			for (int i = 0; i < size; i++) {
				int[] rowCol = queue.poll();
				for (int j = 0; j < 4; j++) {
					int row = rowCol[0] + dirX[j];
					int col = rowCol[1] + dirY[j];
					if (isSafe(grid, row, col)) {
						grid[row][col] = 1 + grid[rowCol[0]][rowCol[1]];
						queue.offer(new int[] { row, col });
					}
				}
			}
		}
		return grid;
	}
}
