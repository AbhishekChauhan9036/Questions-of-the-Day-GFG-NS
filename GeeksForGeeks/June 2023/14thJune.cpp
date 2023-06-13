long long maxDiamonds(int A[], int n, int k) {
        priority_queue<int> pq;
        for(int i = 0; i< n; i++){
            pq.push(A[i]);
        }
        long long sum = 0;
        while(k--){
            int temp = pq.top();
            sum+= temp;
            pq.pop();
            pq.push(temp/2);
        }
        return sum;
    }
