class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        long long minDiff = LLONG_MAX;
        long long i = 0;
        long long j = i + m - 1;
        while (j < n) {
            minDiff = min (minDiff, (a[j] - a[i]));
            i++;
            j++;
        }
        return minDiff;
    }   
};
