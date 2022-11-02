class Solution {
    public static int largestArea(int n,int m,int k,int[][] enemy) {
        
        ArrayList<Integer> xval = new ArrayList<>();
        ArrayList<Integer> yval = new ArrayList<>();
        
        xval.add(-1);
        yval.add(-1);
        
        for(int i=0; i<k; i++)
        {
            xval.add(enemy[i][0]-1);
            yval.add(enemy[i][1]-1);
        }
        
        xval.add(n);
        yval.add(m);
        
        Collections.sort(xval);
        Collections.sort(yval);
        
        //Find the max free length in rows.
        int max_len_x = 0;
        
        for(int i=1; i<xval.size(); i++)
        {
            int prev_row = xval.get(i-1);
            int cur_row = xval.get(i);
            max_len_x = Math.max(max_len_x, cur_row-prev_row-1);
        }
        
        
        //Find the max free length in columns.
        int max_len_y = 0;
        
        for(int i=1; i<yval.size(); i++)
        {
            int prev_row = yval.get(i-1);
            int cur_row = yval.get(i);
            max_len_y = Math.max(max_len_y, cur_row-prev_row-1);
        }
        
        
        return max_len_x * max_len_y;
        
    }
}