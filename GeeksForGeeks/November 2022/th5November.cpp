class Solution {

  public:

    int maxGroupSize(int arr[], int n, int k) {

        int fre[k]{} ;

        for(int i = 0; i < n; i++)

        {

            fre[arr[i]%k]++ ;

        }

        int ans = 0 ;

        ans += (fre[0] > 0) ;

        for(int i = 1; i < k; i++)

        {

            if(2*i == k)

            {

                ans += (fre[i] > 0) ;

                break ;

            }

            if(2*i > k) break ;

            ans += max(fre[i], fre[k-i]) ;

        }

        return ans ;

    }

};