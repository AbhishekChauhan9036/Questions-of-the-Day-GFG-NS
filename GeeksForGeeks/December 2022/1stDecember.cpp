class Solution{
    public:
    void rearrange(long long *a, int n) { 
    	long long num = 10e10+7;
    	int pos ,orgPos,mid = n/2;
    	for(int i=0;i<n;i++) a[i] = num*i+a[i];
    	for(int i=0;i<n;i++){
    	    orgPos = -1;
    	    while(i!=orgPos){
    	        pos = a[i]/num;
    	        if(pos<mid) orgPos = (2*(pos+1))-1;
    	        else{
    	            orgPos = n-(2*(pos-mid+1));
    	            if(n%2!=0) orgPos++;
    	        }
    	        swap(a[i],a[orgPos]);
    	    }
    	}
    	for(int i=0;i<n;i++) a[i] = a[i]%num;
    	return;
    }
};
