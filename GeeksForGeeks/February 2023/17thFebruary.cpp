class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {

        // code here

        int i=0,j=0;

        long long sum=0,result=0;

        if(K>=N)

        {

            return GeekNum[N-1];

        }

        else

        {

            while(j<N-1)

            {

                sum +=GeekNum[j];

                if(j-i+1<K)

                {

                    j++;

                }

                else if((j-i+1)==K)

                {

                    result = sum;

                    GeekNum.push_back(sum);

                    sum = sum-GeekNum[i];

                    i++;

                    j++;

                }

            }

            return result; 

        }

    }
};
