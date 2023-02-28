class Solution{
public:
   vector<int> optimalArray(int n,vector<int> &a){

        // Code here

        vector<int> ans(a.size(),0) ; 

       for(int i=1 ; i<a.size() ; i++){            

                    int index = (0 + i)/2;

                    int val = (a[i] - a[index]) + ans[i-1] ;        

                    ans[i] = val;

        }     

        return ans ;

    }
};
