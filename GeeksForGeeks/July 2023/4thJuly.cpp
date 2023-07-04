class Solution{
  public:
    #define ll long long
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i = 0,j = 0; ll ans = 0,f = 1,upd = 0,prod = 1LL;
        while(j < n){
            if(prod * a[j] < k){
                f -= upd;
                upd = 0;
                ans += f;
                prod *= a[j];
                f++;
                j++;
            }
            else if(a[j] >= k){
                j++;
                i = j;
                prod = 1LL;
                upd = 0LL;
                f = 1LL;
            }
            else{
                prod /= a[i];
                i++;
                upd++;
            }
        }
        return max(ans,0LL);
    }
};
