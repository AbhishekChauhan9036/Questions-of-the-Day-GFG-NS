class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here😐😐
        stack<long long >s;
        vector<long long >ans(n,-1);
        for(int i=0;i<n;i++){
            if(s.size()){
            while(!s.empty() && arr[s.top()]<arr[i]){
            ans[s.top()]=arr[i];
           s.pop();
        }
        }
        s.push(i);
        }
        return ans;
    }
};
