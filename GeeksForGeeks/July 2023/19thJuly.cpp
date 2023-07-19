
class Solution{
  public:
    int lcs(string a, string b, int n)
    {
        vector<vector<int>> v(n + 1, vector<int> (n + 1, 0));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(a[i - 1] == b[j - 1])
                {
                    v[i][j] = 1 + v[i - 1][j - 1];
                }
                else
                {
                    v[i][j] = max(v[i - 1][j], v[i][j - 1]);
                }
            }
        }
        return v[n][n];
    }
    int longestPalinSubseq(string A) {
        //code herere
        string s = A;
        int n = s.size();
        reverse(s.begin(), s.end());
        int x = lcs(A, s, n);
        return x;
    }
};

