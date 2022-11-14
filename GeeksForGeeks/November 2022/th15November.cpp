class Solution {
  public:
   int longestPerfectPiece(int arr[], int n) {
        int maxLen = 0, i = 0, j = 0;
        while(j<n) {
            while(abs(arr[j]-arr[i])<=1)    j++;
            maxLen = max(maxLen , j-i);
            i = j;
        }
        return maxLen;
    }
};

