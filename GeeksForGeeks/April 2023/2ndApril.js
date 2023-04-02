class Solution{
public:

    bool isval(int n, int m, int i, int j)
    {
        return i >= 0 && i < n && j >= 0 && j < m;
    }

    int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        map<int, int> mp;
        queue<pair<pair<int, int>, int>> q;
        q.push({{start_x, start_y}, 0});
        vis[start_x][start_y] = 1;
        vector<int> x{-2, -2, -1, -1, 1, 1, 2, 2};
        vector<int> y{-1, 1, -2, 2, -2, 2, -1, 1};
        while(!q.empty())
        {
            int mov = q.front().second;
            int cx = q.front().first.first;
            int cy = q.front().first.second;
            q.pop();
            mp[mov] = mp[mov] + arr[cx][cy];
            for(int i = 0;i<8;i++)
            {
                if(isval(n, m, cx + x[i], cy + y[i]) && vis[cx + x[i]][cy + y[i]] == 0)
                {
                    vis[cx + x[i]][cy + y[i]] = 1;
                    q.push({{cx + x[i], cy + y[i]}, mov + 1});
                }
            }
        }
        vector<int> temp;
        for(auto it:mp)
            temp.push_back(it.second);
        int big = -1, steps;
        vector<int> dp(temp.size());
        dp[temp.size() - 1] = temp[temp.size() - 1];
        for(int i = temp.size() - 2;i>=0;i--)
        {
            if(i + temp[i] < temp.size())
                dp[i] = temp[i] + dp[i + temp[i]];
            else
                dp[i] = temp[i];
        }
        for(int i = 0;i<temp.size();i++)
        {
            if(dp[i] > big)
            {
                big = dp[i];
                steps = i;
            }
        }
        return steps;
    }
};
