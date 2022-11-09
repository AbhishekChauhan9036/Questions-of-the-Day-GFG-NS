class Solution {
public:
    int maximumRows(vector<vector<int>>& mat, int cols) {
        int __ttt=mat.size();int _uyt=mat[0].size();int timee=pow(2,_uyt)-1;
        vector<vector<int>> vp(timee+1,vector<int>(_uyt,0));
        for(int i=0;i<=timee;i++){
             int el=i;
            for(int j=0;j<_uyt;j++){
                if((i&(1<<j))>=1){
                    vp[i][j]=1;
                }
            }
        }
        int mx=0;
        for(int i=0;i<=timee;i++){
            int cnt=0;
            set<int> st;
                            int gnt=0;
             for(int j=0;j<_uyt;j++){
                 if(vp[i][j]==1){
                     st.insert(j);
                     cnt++;
                 }
             }
            if(cnt==cols){
                for(int i=0;i<__ttt;i++){ bool check=0; for(int j=0;j<_uyt;j++){
                        if(st.count(j)==0){
                            if(mat[i][j]==1)check=1;
                        }
                    }
                   if(check==0)gnt++; 
                }

            }  mx=max(mx,gnt);
        }
        return mx;
    }
};