class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
        long long sum=0;
        
        for(auto a:arr) {sum+=a;}
        
        //cout<<sum<<endl;
        while(N>0)
        {
            if(sum%N==0) return N;
            N--;
        }
        return 1;
    }
};
