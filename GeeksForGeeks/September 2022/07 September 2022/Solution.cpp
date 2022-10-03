class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B)
    {
        stack<int> s;
        int j=0;
        for(int i=0;i<N;++i)
        {
            s.push(A[i]);
            while(s.size() && s.top()==B[j])
            {
                ++j;
                s.pop();
            }
        }
        return (j==N&&s.empty());
    }
};