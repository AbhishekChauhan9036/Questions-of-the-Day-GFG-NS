class Solution{
public:
	vector<int> generateNextPalindrome(int num[], int n) {
	    
	    int l = 0;
	    int u = n - 1;
	    
	    bool greater = false;
	    
	    while(l <= u)
	    {
	        if(num[l] > num[u])
	            greater = true;
	        else if(num[l] < num[u])
	            greater = false;
	        
	        num[u] = num[l];
	            
	        ++l;
	        --u;
	    }
	    
	    l = (n-1)/2;
	    u = n/2;
	    
	    while(!greater && l>=0 && u<n)
	    {
	        if(num[l] == 9)
	            num[l] = num[u] = 0;
	        else
	        {
	            ++num[l];
	            if(l != u)
	                ++num[u];
	            break;
	        }
	        
	        --l;
	        ++u;
	    }
	    
	    vector<int> result;
	    
	    if(num[0] == 0)
	        result.push_back(1);
	        
	    for(int i=0; i<n; i++)
	    {
	        if(num[0] == 0 && i == 0)
	            continue;
	        result.push_back(num[i]);
	    }
	    
	    if(num[0] == 0)
	        result.push_back(1);
	        
	    return result;
	    
	}

};
