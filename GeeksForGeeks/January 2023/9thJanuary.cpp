class Solution {
  public:
    int solve(int N, vector<int> A) {
        int i=N-1;
        while(i>=0 && A[i]==9) i--;
        return i+1;
    }

};
