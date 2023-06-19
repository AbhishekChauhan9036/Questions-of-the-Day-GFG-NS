

class Solution {
  public:
    int matchGame(long long N) {
        // code here
        N %= 5LL;
        return N == 0 ? -1 : N;
    }
};

