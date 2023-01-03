
class Solution {
  public:
    int removeStudents(int H[], int N) {
         vector<int>arr;
        for(int i=0;i<N;i++)
        {
              int it=lower_bound(arr.begin(),arr.end(),H[i])-arr.begin();
              if(it==arr.size())
              arr.push_back(H[i]);
              else
              arr[it]=H[i];
        }
        
        return N-arr.size();
    }
};
