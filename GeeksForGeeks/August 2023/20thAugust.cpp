class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int lb = lower_bound(arr, arr+n, x) - arr;
	    if(lb >= n || arr[lb] != x) return 0;
	    int ub = upper_bound(arr, arr+n, x) - arr;
	    ub -= 1;
	    if(ub >= n || arr[ub] != x) return 0;
	    return ub - lb + 1;
	}
};
