 public:
  long long func(vector<int> &k)
  {
      vector<long long> temp(k.size(),0);
      temp[0]=k[0];
      temp[1]=k[1];
      for(int i=2;i<k.size();i++)
      {
          temp[i]=max(temp[i-2]+k[i],temp[i-1]+k[i]);
      }
      return max(temp[temp.size()-1],temp[temp.size()-2]);
  }
    long long findMaxSubsetSum(int N, vector<int> &a) {
        // code here
        long long res=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<0)
            {
                vector<int> temp;
                while(i<a.size() && a[i]<0)
                temp.push_back(a[i++]);
                i--;
                if(temp.size()>1)
                res+=func(temp);
            }
            else
            res+=a[i];
        }
        return res;
    }
};
