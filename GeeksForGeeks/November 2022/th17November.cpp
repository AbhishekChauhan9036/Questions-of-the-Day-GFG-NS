
class Solution{
public:
	// #define ll long long..

	long long countSubarray(int arr[], int n, int k) {
	    int left = 0;
	    long long ans = 0;
	    for (int i = 0 ; i < n ; i++){
	        for (int j = left ; j < n ; j++){
	            if (arr[j] > k) {
	                ans += (n - j);
	                break;
	            }
	        }
	        left++;
	    }
	    return ans;
	}
};
