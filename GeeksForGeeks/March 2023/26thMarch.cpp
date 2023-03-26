class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        //just do carefully 

int ans=0;
        int visited[leaves+1]={0};
        for(int i=0;i<N;i++)
        {

//lack of this condition leads to tle ----<<<<<<
            if(frogs[i]<=leaves and !visited[frogs[i]]){
            for(int j=frogs[i];j<=leaves;j+=frogs[i]){
            visited[j]=1;
            }
            }
        }
     for(int i=1;i<leaves+1;i++)
     if(!visited[i])ans++;
     return ans;
    }
};
