class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        stack <int> st;
        int leader = INT_MIN;
        for(int i = n-1 ; i>= 0 ; i--){
            if(leader <= a[i]){
                st.push(a[i]);
                leader = a[i];
            }
        }
        
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
        
    }
};
