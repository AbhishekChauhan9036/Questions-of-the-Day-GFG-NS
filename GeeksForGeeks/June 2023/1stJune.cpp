class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int n, vector<int> adj[]) 
	{
	    vector<int> indegree(n);
	    for(auto i = 0; i < n; i++) {
	        for(auto j: adj[i])
	            indegree[j]++;
	    }
	    
	    queue<int> q;
	    for(int i = 0; i < n; i++) {
	        if(!indegree[i])
	            q.push(i);
	    }
	    
	    vector<int> ans;
	    while(!q.empty()) {
	        auto p = q.front();
	        q.pop();
	        
	        ans.push_back(p);
	        for(auto v: adj[p]) {
	            indegree[v]--;
	            if(!indegree[v])
	                q.push(v);
	        }
	    }
	    
	    return ans;
	}
};
