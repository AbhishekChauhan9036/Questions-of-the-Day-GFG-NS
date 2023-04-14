
class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        // code here
        int tim = 0;
        int maxi = *max_element(arr.begin(),arr.end());
        vector<int> v(maxi+1,-1);
        v[arr[0]]=0;
        for(int i = 1; i < n; i++)
        {
            if(v[arr[i]]==-1)
            {
                tim++;
                v[arr[i]] = tim;
               
            }
            else
            {
                if(time[arr[i]-1] >= tim - v[arr[i]])
                {
                    tim = tim + (time[arr[i]-1] -(tim - v[arr[i]]));
                    v[arr[i]] = tim;
                }
                else
                {
                    tim++;
                    v[arr[i]] = tim;
                }
            }
        }
        return tim;
    }
};
