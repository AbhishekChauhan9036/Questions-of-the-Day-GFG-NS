
class Solution{
	public:
    void solve(vector<int> &arr, int n, vector<int>t, set<vector<int>>&st, int sum){

     if(sum==0){

         sort(t.begin(),t.end(),greater<int>());

         st.insert(t);

     }

     if(n<0){

         return;

     }

     if(arr[n]<=sum){

         solve(arr, n-1, t, st, sum);

         t.push_back(arr[n]);

         solve(arr, n, t, st, sum-arr[n]);

     }

     else{

         solve(arr, n-1, t, st, sum);

     }

 }

    vector<vector<int>> UniquePartitions(int n) {

        // Code here

        vector<vector<int>>ans;

        set<vector<int>>st;

        vector<int>arr(n,1);

        for(int i=1;i<n;i++){

            arr[i]=i+1;

        }

        vector<int>t;

        int sum=n;

        solve(arr, n-1, t, st, sum);

        for(auto it=st.rbegin();it!=st.rend();it++){

            ans.push_back(*it);

        }

        return ans;

    }
};

