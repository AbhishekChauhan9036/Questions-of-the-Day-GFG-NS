class Solution {

  public:

    int fillingBucket(int N) {

        // code here

        

        // no need of dp.

        // fibonacci is here.

        long long int m=100000000;

        int ways;

        if(N==1)

        return 1;

        else if(N==2)

        return 2;

        else

        {

            long long int n1=1,n2=2,s,i;

            for(i=3;i<=N;i++)

            {

                s=(n1%m+n2%m)%m;

                n1=n2%m;

                n2=s%m;

            }

            ways=s%m;

            return ways%m;

            

        }

    }

};