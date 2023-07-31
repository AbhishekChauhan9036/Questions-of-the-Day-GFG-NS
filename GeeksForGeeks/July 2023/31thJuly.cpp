class Solution {
  public:
       vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V];
        for(int i=0;i<V;i++){
            visited[i]=false;
        }
        visited[0]=true;
        queue<int> q;
        q.push(0);
        vector<int> res;
        while(!q.empty()){
            
            int u=q.front();
            q.pop();
            res.push_back(u);
            
            for(int x:adj[u]){
                if(visited[x]==false){
                    visited[x]=true;
                    q.push(x);
                }
            }
            
        }
        return res;
    }
};
