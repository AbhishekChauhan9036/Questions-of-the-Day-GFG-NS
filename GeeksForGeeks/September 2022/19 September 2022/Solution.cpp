class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        stack<int> s;
        vector<int> ans;
        int i = 0;

        for(i = 0; i < n; i++) {
            if(s.empty()) {
                ans.push_back(-1);
            } else if(s.top() < a[i]) {
                ans.push_back(s.top());
            } else {
                while(!s.empty() and s.top() >= a[i]) {
                    s.pop();
                }

                if(s.empty()) {
                    ans.push_back(-1);
                } else {
                    ans.push_back(s.top());
                }
            }
            s.push(a[i]);
        }
        return ans;
    }
};