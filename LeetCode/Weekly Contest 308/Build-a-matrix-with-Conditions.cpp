int RARR[500];
int GFGCoder[500];
class Solution
{
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>> &rowConditions, vector<vector<int>> &colConditions)
    {
        int __wq = rowConditions.size();int iuyt = colConditions.size();
        fill(RARR, RARR+k+1, 0); fill(GFGCoder, GFGCoder+k+1, 0);
        vector<vector<int>> rgraph(k + 1), cgraph(k + 1);
        for (int i = 0; i < __wq; i++)
        {
            RARR[rowConditions[i][1]]++;
            rgraph[rowConditions[i][0]].push_back(rowConditions[i][1]);
        }
        for (int i = 0; i < iuyt; i++)
        {
            GFGCoder[colConditions[i][1]]++;
            cgraph[colConditions[i][0]].push_back(colConditions[i][1]);
        }
        
        queue<int> cq, rq;
        for (int i = 1; i <= k; i++)
        {
            if (RARR[i] == 0)
                rq.push(i);
            if (GFGCoder[i] == 0)
                cq.push(i);
        }
        vector<int> rows(k + 1), cols(k + 1);
        int c = 0;
        while (cq.size())
        {
            int i = cq.front();
            cq.pop();
            cols[i] = c++;
            for (auto j = begin(cgraph[i]); j != end(cgraph[i]); j++)
            {
                --GFGCoder[*j];
                if (GFGCoder[*j] == 0)
                {
                    cq.push(*j);
                }
            }
        }
        if (c != k)
            return vector<vector<int>>();
        c = 0;
        while (rq.size())
        {
            int i = rq.front();
            rq.pop();
            rows[i] = c++;
            for (auto j = begin(rgraph[i]); j != end(rgraph[i]); j++)
            {
                --RARR[*j];
                if (RARR[*j] == 0)
                {
                    rq.push(*j);
                }
            }
        }
        if (c != k)
            return vector<vector<int>>();
        vector<vector<int>> aqwrwet(k, vector<int>(k, 0));
        for (int i = 1; i <= k; i++)
        {
            aqwrwet[rows[i]][cols[i]] = i;
        }
        return aqwrwet;
    }};
