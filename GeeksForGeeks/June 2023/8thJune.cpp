class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        vector<int>ans;
        ans.push_back(INT_MAX);//Here you can push any number
        for(int i=1;i<=n;i++){
            int x=i;
            for(int j=2;j<=i;j++){
                if(i%j==0){
                    x=j;
                    break;
                }
            }
            ans.push_back(x);
        }
    return ans;
    }
};
