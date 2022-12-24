class Solution{

  public:

  long long int wineSelling(vector<int> &A,int N){

         long long int ans=0, sum=0;

        for(int i=0; i<N; i++){

           ans+=abs(sum);

           sum+=A[i];         

        }

       return ans;

    }

};
