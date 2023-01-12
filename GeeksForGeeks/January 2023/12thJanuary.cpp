class Solution {
public:
     int minimizeSum(int N, vector<int> arr) {
        // code here
       priority_queue<int , vector<int> , greater<int>> q;
       
       for(int i=0;i<N;i++ ) q.push(arr[i]);
       
       int final_ans = 0;
         
         
        while(q.size()>1){
            int first= q.top();
            q.pop();
            int second = q.top();
            q.pop();
            
            int sum = first + second;
            final_ans+= sum;
            
            q.push(sum);
            
        }
        
        return final_ans;
    }
};
