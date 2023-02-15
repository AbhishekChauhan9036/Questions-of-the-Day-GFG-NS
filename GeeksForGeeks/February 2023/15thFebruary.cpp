
class Solution{   

    bool valid(int i, int j, vector<vector<bool>> &vis, int prev, vector<vector<int>> &mat)

    {

        int n = vis.size(), m = vis[0].size();

        return i >=0 && j >= 0 && i < n && j < m && !vis[i][j] && prev <= mat[i][j];

    }

public:

    int water_flow(vector<vector<int>> &mat, int n, int m){

      queue<pair<int, pair<int, int>>> q;

       vector<vector<bool>> vis(n, vector<bool> (m, false));

      for(int i = 0; i < m; i++)

      {

          q.push({mat[0][i], {0, i}});

          vis[0][i] = 1;

      }

      for(int i = 1; i< n; i++)

      {

          q.push({mat[i][0], {i, 0}});

          vis[i][0] = 1;

      }

      map<pair<int, int>, int> indian;

      while(!q.empty())

      {

          int val = q.front().first;

          pair<int, int> p = q.front().second;

          int i = p.first, j = p.second;

          q.pop();

          indian[{i, j}] = true;

          vis[i][j] = true;

          if(valid(i+1, j, vis, val, mat)){

              vis[i+1][j] = true;

              q.push({mat[i+1][j], {i+1, j}});

          }

           if(valid(i-1, j, vis, val, mat)){

               vis[i-1][j] = 1;

              q.push({mat[i-1][j], {i-1, j}});

          }

           if(valid(i, j-1, vis, val, mat)){

               vis[i][j-1] = 1;

              q.push({mat[i][j-1], {i, j-1}});

          }

           if(valid(i, j+1, vis, val, mat)){

               vis[i][j+1] = 1;

              q.push({mat[i][j+1], {i, j+1}});

          }

      }

      vector<vector<bool>> vi(n, vector<bool> (m, false));

       for(int i = 0; i < n; i++)

       {

           q.push({mat[i][m-1], {i, m-1}});

           vi[i][m-1] = true;

       }

       for(int j = 0; j < m-1; j++)

       {

           q.push({mat[n-1][j], {n-1, j}});

           vi[n-1][j] = 1;

       }

       

       int cnt = 0;

      while(!q.empty())

      {

          int val = q.front().first;

          pair<int, int> p = q.front().second;

          int i = p.first, j = p.second;

          q.pop();

          if(indian[{i, j}]) {cnt++;}

          vi[i][j] = true;

          if(valid(i+1, j, vi, val, mat)){

              vi[i+1][j] = true;

              q.push({mat[i+1][j], {i+1, j}});

          }

           if(valid(i-1, j, vi, val, mat)){

               vi[i-1][j] = 1;

              q.push({mat[i-1][j], {i-1, j}});

          }

           if(valid(i, j-1, vi, val, mat)){

               vi[i][j-1] = 1;

              q.push({mat[i][j-1], {i, j-1}});

          }

           if(valid(i, j+1, vi, val, mat)){

               vi[i][j+1] = 1;

              q.push({mat[i][j+1], {i, j+1}});

          }

      }

      return cnt;

      

    }

};
