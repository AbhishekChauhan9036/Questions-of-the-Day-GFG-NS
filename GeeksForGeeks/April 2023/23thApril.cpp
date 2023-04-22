class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
       
       int mini = *min_element(arr.begin(),arr.end());
        for(int i = 0; i < n; i++)
        {
            if(arr[i]%mini==0)
            {
                mini = mini;
            }
            else
            {
                mini = arr[i]%mini;
            }
        }
        return mini;
    }
};
