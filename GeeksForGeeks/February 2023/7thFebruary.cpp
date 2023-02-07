class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
         int maxLength(vector<int> &arr,int n){
          int x=0,mx=0,z=0,par=0,ans;
         int neg=-1,last=-1;
         for(int i=0;i<n;i++){
         if(arr[i]==0){
             par=0,neg=-1,last=-1;
         }else {
             
             if(last==-1){
                 last=i;
             }
             if(neg==-1 &&arr[i]<0){
                 neg=i;
             }
             par=par^(arr[i]<0?1:0);
             if(par==0){
                 ans=max(ans,i-last+1);
             }
             else ans=max(ans,i-neg);
         }
         }
         return ans;
        } 

};

