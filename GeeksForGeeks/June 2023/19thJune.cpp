class Solution{
    public:
    void arrange(long long arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] += (arr[arr[i]] % n) * n;
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] /= n;
    }
}

};
