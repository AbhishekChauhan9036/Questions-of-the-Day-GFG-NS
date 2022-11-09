class Solution{
    
    vector<int> SubSet(int arr[], int sum,int n){
        vector<vector<bool>> ans(n + 1, vector<bool>(sum + 1));
        for (int i = 0; i < n + 1; i++){
            ans[i][0] = true;
        }
        for (int i = 1; i < sum + 1; i++){
            ans[0][i] = false;
        }
        for (int i = 1; i < n + 1; i++){
            for (int j = 1; j < sum + 1; j++){
                if (arr[i - 1] <= j)
                    ans[i][j] = ((ans[i - 1][j - arr[i - 1]]) || (ans[i - 1][j]));
                else
                    ans[i][j] = (ans[i - 1][j]);
            }
        }
        vector<int> subArr;
        for (int i = 0; i <=sum/2; i++){
            if (ans[n][i] == true)
                subArr.push_back(i);
        }
        return subArr;
    }

  public:
	int minDifference(int arr[], int n)  { 
	    int sum = 0;
        for (int i = 0; i < n; i++){
            sum += arr[i];
        }
        vector<int> tempAns = SubSet(arr, sum,n);
        int ans = INT_MAX;
        for (int i = 0; i < tempAns.size(); i++){
            ans = min(ans, sum - 2 * tempAns[i]);
        }
    
        return ans;
	} 
};