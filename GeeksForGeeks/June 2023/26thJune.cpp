
class Solution{
public:
    long long modInverse(long long a, long long m) {
        long long m0 = m;
        long long y = 0, x = 1;
    
        if (m == 1)
            return 0;
    
        while (a > 1) {
            long long q = a / m;
            long long t = m;
    
            m = a % m;
            a = t;
            t = y;
    
            y = x - q * y;
            x = t;
        }
    
        if (x < 0)
            x += m0;
    
        return x;
    }

    int nCr(int n, int r){
        // code here
        int mod = 1e9+7;
        if (r > n) return 0;
        if (r == n) return 1;
        r = min(n-r, r);
        long long nf = 1, rf = 1;
    
        for (int i = 1; i <= r; i++) {
            nf = (nf * (n - i + 1)) % mod;
            rf = (rf * i) % mod;
        }
    
        long long result = (nf * modInverse(rf, mod)) % mod;
        return result;
    }
};
