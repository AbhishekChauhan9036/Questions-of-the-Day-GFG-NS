class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
       const int m=1e9+7;
       if(R==0)
       {
           return 1;
       }
       long long ans=1;
       long long temp=1;
       temp=power(N,R/2);
        ans=(temp*temp)%m;
       
       
      if(R%2!=0)
      {
          ans=(ans*N)%m;
      }
        return ans;

 
        
    }

};

