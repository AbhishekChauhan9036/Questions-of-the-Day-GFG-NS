class Solution {

  public:

    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {

        // code here

        long long ans=0;

        int mini=INT_MAX;

        long long count=0;

        

        for(int i=0;i<N;i++)

        {

            // rectangles

            // B[i] -> number of sticks available

            

            int rect_pair=B[i]/2;

            ans+=(2*rect_pair*A[i]);

            mini=min(mini,A[i]);

            count+=rect_pair;

        }

        if(count%2!=0) ans-=(2*mini);

        return ans;

    }};
