class Solution{

    public:

    bool isScramble(string s1, string s2){

        //code here

           if (s1 == s2) return true; 

    if (s1.size() != s2.size()) return false;

 

    int n = s1.size();

    int count[26] = {0};

    for (int i = 0; i < n; i++) {

        count[s1[i] - 'a']++;

        count[s2[i] - 'a']--;

    }

    for (int i = 0; i < 26; i++)

        if (count[i]) return false;

    bool dp[n][n][n+1];

    memset(dp, false, sizeof dp);

    for (int i = n-1; i >= 0; i--) {

        for (int j = n-1; j >= 0; j--) {

            dp[i][j][1] = s1[i] == s2[j];

            for (int k = 2; i+k <= n && j+k <= n; k++) {

                for (int p = 1; p < k; p++) {

                    if ((dp[i][j][p] && dp[i+p][j+p][k-p]) || (dp[i][j+k-p][p] && dp[i+p][j][k-p])) {

                        dp[i][j][k] = true;

                        break;

                    }

                }

            }

        }

    }

    return dp[0][0][n];

    }    

};
