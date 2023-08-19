class Solution
{
    public:
   
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int>res;
        int i=0;
        int j=0;
        int sum=arr[0];
// specifically for the 8th tc  
        if(s==0){
            res.push_back(-1);
            return res;
        }
            while(j<n){
                if(sum==s){
                   res.push_back(i+1);
                    res.push_back(j+1);
                    break;
                }
                else if(sum>s){
                    sum-=arr[i];
                    i++;
                }
                else{
                   j++;
                    if(j<n)
                        sum+=arr[j];
                }
            }
           
            if(res.empty()){
                res.push_back(-1);
            }
                return res;
            
        }
    
};
