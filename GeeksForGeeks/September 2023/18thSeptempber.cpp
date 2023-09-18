

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){

        if(n == 1) return true;
        if(n&1 == 1 || n == 0) return false;
        isPowerofTwo(n>>1);
    }
};


