class Solution{
    public:
    vector<long long int> twoOddNum(long long int a[], long long int n)  {
        int x=0, y=0, i, xorVal=0;
        for(i=0;i<n;i++) xorVal ^= a[i];
        xorVal=(xorVal)&(-xorVal);
        for(i=0;i<n;i++) {
            if(xorVal & a[i]) x ^= a[i];
            else y ^= a[i];
        }
        if(x<y) swap(x, y);
        return {x, y};
    }
};