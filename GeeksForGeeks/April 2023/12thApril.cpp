class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        
        sort(arr.begin(),arr.begin()+n/2,greater<int>{});
        sort(arr.begin()+(n/2),arr.end(),greater<int>{});
        
        int count=0;
        int i=0;
        int j=n/2;
        
        while(i<n/2 && j<n)
        {
            if(arr[i]>=5*arr[j])
            {
                count+=n-j;
                i++;
            }
            
            else{
                j++;
            }
        }
        
        return count;
    }
};
