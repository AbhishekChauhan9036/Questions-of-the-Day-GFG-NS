
class Solution{
    public void shortest_distance(int[][] adj){
        // Code here 
        int n = adj.length;
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(adj[i][k]==-1 || adj[k][j]==-1) continue;
                    if(adj[i][j]==-1) adj[i][j] = adj[i][k]+adj[k][j];
                    else adj[i][j] = Math.min(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }
    }
}