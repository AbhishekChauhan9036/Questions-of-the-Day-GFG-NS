class Solution
{
  public:
    int maxWeightCell(int N, vector<int> Edge)
  {
        int arr[N];
      for(int i=0;i<N;i++)
      {
          arr[i]=0;
      }
      for(int i=0;i<Edge.size();i++)
      {
          if(Edge[i]!=-1)
          {
              arr[Edge[i]]+=i;
          }
      }
      int maxN=INT_MIN;
      int maxVal=0;
      for(int i=0;i<N;i++)
      {
            if(arr[i]>maxN)
            {
                maxN=arr[i];
                maxVal=i;
            }
      }
      return maxVal;
  }
};
