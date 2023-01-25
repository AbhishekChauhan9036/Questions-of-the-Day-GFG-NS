

class Solution {
  public:
    int minOperation(string s) {
int n=s.size();

        string ans="";

        int i=0;

        int count=0;

        int m=0;

        while(i<n){

            bool flag=true;

            if(ans.empty())flag=false;

            for(int j=0;j<ans.size();j++){

                if(ans[j]!=s[i+j]){

                    flag=false;

                    break;

                }

            }

            if(flag && ans.size()<(i-n)){

                i+=ans.size();

                m=ans.size();

                ans+=ans;

                

             

                

            }else{

                ans+=s[i];

                i++;

                

            }

            

        }

        if(s.size()==1)return 1;

        else return s.size()-m+1;
    }
};
