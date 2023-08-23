class Solution {
public:
vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
    // Code here
    vector<vector<int>>ans;
    
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0; j<grid[i].size();j++)
        {
            if(grid[i][j]==word[0])
            {
                bool found=false;
                
                for(int k1=-1;k1<2;k1++)
                {
                    for(int k2=-1;k2<2;k2++)
                    {
                        if(found)
                            break;
                        if(k1==0&&k2==0)
                        {
                            continue;
                        }
                        else
                        {
                            int tempi=i;
                            int tempj=j;
                            int l;
                            for(l=0;l<word.size();l++)
                            {
                                if(tempi>=0 && tempj>=0 && tempi<grid.size() && tempj<grid[i].size() && grid[tempi][tempj]==word[l])
                                {
                                    tempi+=k1;
                                    tempj+=k2;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if(l==word.size())
                            {
                                found=true;
                                ans.push_back({i,j});
                            }
                        }
                    }
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
  }
};
