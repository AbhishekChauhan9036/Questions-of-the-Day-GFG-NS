class Solution {

  public:

    long long countPairs(int n, int arr[], int k) {

        // code here

        map<int,int>map;

        int ans=0;

        for(int i=0; i < n;i++)

        

        {

            //if(map.find(arr[i]%k)!=map.end())

            ans+=map[arr[i]%k];

          

            

        

          map[arr[i]%k]++;

        }

        return ans;

    }

};
