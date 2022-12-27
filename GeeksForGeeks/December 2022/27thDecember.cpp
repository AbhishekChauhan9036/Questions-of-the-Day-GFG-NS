
long long maxArea(long long arr[], int len)
{
    long long ans = 0;
    int low = 0, high = len-1;
    
    while(low < high){
        
        long long water = (high - low) * min(arr[high], arr[low]);
        if(arr[low] < arr[high])
            low++;
        else
            high--;
            
        ans = max(ans ,water);
    }
    
    return ans;
}
