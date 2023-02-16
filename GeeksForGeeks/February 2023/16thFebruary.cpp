class Solution{
private:
    int dfs(int src, vector<int> &arr, vector<int>& visited, int n){
        
        //base cases
        if(src>=n or src<0)     //reached out of indexes 
            return 1e9;
        
        if(visited[src]==1e9)       //reached to that node which is safe
            return 1e9;
        
        if(visited[src]==-1e9)      //reached to that node which is not safe
            return -1e9;
        
        if(visited[src]==1111)      //reached to that node which was earlier visited
                                    //in current path (cycle)
            return -1e9;
        
        visited[src]=1111;      //marking visited as true(normal dfs concept)
        
        visited[src]=dfs(src+arr[src],arr,visited,n);
    }
    
public:
    int goodStones(int n,vector<int> &arr){
        // Code here
        
        vector<int> visited(n,-1111);   // can't take 0 as array value can be 0
        
        //pre-computation for some obvious things
        for(int i=0;i<n;i++){       
            if((i+arr[i])>=n or (i+arr[i])<0)   //1e9 reprsents good stones
                visited[i]=1e9;
            
            if(arr[i]==0)       //-1e9 represents bad stones
                visited[i]=-1e9;        
        }
        
        //dfs
        for(int i=0;i<n;i++){
            if(visited[i]!=1e9 or visited[i]!=-1e9)
                int dummy=dfs(i,arr,visited,n);
        }
        
        //calculating final answer
        int ans=0;
        for(int i=0;i<n;i++)
            if(visited[i]==1e9)     ans++;
        return ans;
    }  
};
