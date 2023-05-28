class Solution {
  public:
       vector<string> CamelCase(int n, vector<string>s, string p) {
        // code here
        vector<string>v;
        for(int i=0;i<n;i++){
            int n1=s[i].length();
            int k=0,t=0;
            for(int j=0;j<n1;j++){
                if(s[i][j]>=65&&s[i][j]<=90)
                t++;
                if(s[i][j]==p[k]&&t==k+1){
                    k++;
                    if(k==p.size()){
                        v.push_back(s[i]);
                        break;
                        
                    }
                }
            }
        }
        if(v.size()==0)
        v.push_back("-1");
        return v;
    }
};
