
class Solution{
public: 
   long long int largestPrimeFactor(int N) {
    int largestFactor = 0;
    
    while (N % 2 == 0) {
        largestFactor = 2;
        N /= 2;
    }
    
    for (int i = 3; i <= sqrt(N); i += 2) {
        while (N % i == 0) {
            largestFactor = i;
            N /= i;
        }
    }
    
    if (N > 2) {
        largestFactor = N;
    }
    
    return largestFactor;
}
};


