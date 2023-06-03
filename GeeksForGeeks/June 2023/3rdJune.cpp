class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        vector<int>S(3,0);
        N1--,N2--,N3--;
        int ans = 0;
        while(true){
            int min_sum = min({S[0],S[1],S[2]});
            if(S[0] == min_sum){
                if(N1 >= 0){
                    S[0] += S1[N1];
                    N1--;
                }
                else{
                    break;
                }
            }
            if(S[1] == min_sum){
                if(N2 >= 0){
                    S[1] += S2[N2];
                    N2--;
                }
                else{
                    break;
                }
            }
            if(S[2] == min_sum){
                if(N3 >= 0){
                    S[2] += S3[N3];
                    N3--;
                }
                else{
                    break;
                }
            }
            if(S[0] == S[1] && S[1] == S[2]){
                ans = S[0];
            }
        }
        return ans;
    }
};
