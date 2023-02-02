class Solution
{
    void util(vector<int> &Edge,vector<bool> &visited,int u,int start,long long &ans,long long curr,unordered_map<int,long long> &mp)
    {
        if(mp.find(u) != mp.end())//if seen earlier
        {
            //the cycle must have started at u so we subtract all values before it
            //ans will be maximum of ans and curr sum - sum before u
            ans = max(ans,curr-mp[u]);
            return;
        }
        if(Edge[u] == -1)//if met a dead end
            return;
        
        if(!visited[u])//if not visited earlier
        {
            visited[u] = true;//mark it visited
            mp[u] = curr;//store sum before this node
            //call on the child including current node value
            util(Edge,visited,Edge[u],start,ans,curr+u,mp);
        }
        
    }
  public:
  long long largestSumCycle(int N, vector<int> Edge)
  {
    // code here
    vector<bool> visited(N,false);//visited array
    long long ans = -1;
    
    for(int i = 0 ; i < N ; i++)
    {
        if(!visited[i] && Edge[i]!=-1)//if not visited and not a dead end
        {
            unordered_map<int,long long> mp;//map to store all sums in current path
            mp[i] = 0;
            visited[i] = true;
            //call on the child adding curr value
            util(Edge,visited,Edge[i],i,ans,i,mp);
        }
    }
    //return the final answer
    return ans;
  }
};
