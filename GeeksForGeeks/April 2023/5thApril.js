class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> v) {
        sort(v.begin(), v.end());
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i]==v[i+1])
            {
                count++;
            }
            else
            {
                for(int j = 0; j < i; j++)
                {
                    if(v[i]%v[j]==0)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
    }
};
