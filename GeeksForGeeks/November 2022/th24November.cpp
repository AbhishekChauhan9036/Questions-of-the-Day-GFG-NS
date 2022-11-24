class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    int n = nums.size();
	    // First find the Longest Increasing Subsequence:
	    vector<int> lis(n,1);
	    
	    for(int i=1; i<n; ++i) {
	        for(int j=0; j<i; ++j) {
	            if(nums[i] > nums[j]) {
	                lis[i] = max(lis[i], 1+lis[j]);
	            }
	        }
	    }
	    
	    // Now Find the Longest decreasing subsequence ending at i'th index
	    vector<int> lds(n,1);
	    
	    for(int i=n-2; i>=0; --i) {
	        for(int j=n-1; j>i; --j) {
	            if(nums[i] > nums[j]) {
	                lds[i] = max(lds[i], 1+lds[j]);
	            }
	        }
	    }
	    
	    int maxi = INT_MIN;
	    
	    for(int i=0; i<n; ++i) {
	        maxi = max(maxi, (lis[i]+lds[i]-1));
	        // -1 is done in order to eliminate the i'th element once, which is included twice
	    }
	    
	    return maxi;
	    
	}
};
