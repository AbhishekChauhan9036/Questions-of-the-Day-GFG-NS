class Solution {
    public:
    int solve(int N, vector<int> p){
        // code here
        vector<int> v(N, 0); // array for keeping further connection counts of each nodes
        
        for (int i = 1; i < N; i++){
          v[p[i]]++;  
        }
        
        int count = 0;
        for (int i = 1; i < N; i++){
         if (v[i] == 0)
            count++;   // counting the number of leaf nodes cause their further connection count is 0
        }
        
        return (N - count - 1); // substracting the leaf node number + main root node because the number of 
        // intermediate nodes (nodes b/w main root node and leaf nodes) are the minimum number have to be 
        // merged to main root node 
        
    }
};
