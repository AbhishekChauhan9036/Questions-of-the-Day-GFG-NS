class Solution {

  public:

 

    void dfs(int vertex,vector<int>&vis,vector<int>&ans,vector<int>adj[]){

        vis[vertex]=true;

        ans.push_back(vertex);

        for(auto x:adj[vertex]){

            if(vis[x]==false) dfs(x,vis,ans,adj);

        }

    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {

 

vector<int>vis(V+1,false);

vector<int>ans;

dfs(0,vis,ans,adj);

return ans;

    }

};
