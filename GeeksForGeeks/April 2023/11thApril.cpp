class Solution {
public:
    int solve(int a, int b, int c) {
        int maxi = max(a,max(b,c));
        int gaps = maxi/2;
        if (maxi==a) if (gaps<=b+c) return a+b+c;
        if (maxi==b) if (gaps<=a+c) return a+b+c;
        if (maxi==c) if (gaps<=b+a) return a+b+c;
        return -1;
    }
};
