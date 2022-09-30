class Solution{
public:
    long long minCost(long long arr[], long long n){
        long long res = 0;
        priority_queue<long long int, vector<long long int>, greater<long long int>> q;
        for (long long int i = 0; i < n; i++){
            q.push(arr[i]);}
        while (q.size() > 1){
            long long int a = q.top();
            q.pop();
            long long int b = q.top();
            q.pop();
            res += (a + b);
            q.push(a + b);}
        return res;
    }
};