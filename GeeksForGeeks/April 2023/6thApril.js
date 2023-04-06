
class Solution {
  public:
   int equalSum(int n, vector<int>& arr) {
        if(n == 1) return 1;
        
        int sum = accumulate(arr.begin(), arr.end(), 0);
        int newSum = 0;
        
        for(int i = 0; i < n; i++) {
            sum -= arr[i];
            if(sum == newSum) return i + 1;
            newSum += arr[i];
        }
        
        return -1;
    }
};
