
class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        unordered_set<int>st;
        vector<int>ans(N);
        
        for(int i=0;i<N;i++)
        {
            
                ans[i]=st.size();
                st.insert(A[i]);
        }
        st.clear();
        
        for(int i=N-1;i>=0;i--)
        {
            ans[i]-=st.size();
            st.insert(A[i]);
        }
        return ans;
    }
};

