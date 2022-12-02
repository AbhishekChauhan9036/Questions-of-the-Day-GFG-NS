
class Solution {
  public:
   int isItPossible(string S, string T, int M, int N) {
        // code here
        if(M!=N) return 0;
        int i=0,j=0;
        while(i<M && j<N) {
            char s = S[i];
            char t = T[j];
            if(s==t) {
                i++;
                j++;
            } else {
                if(s=='A') {
                    return 0;
                } else if(s=='B') {
                    if(t=='A') {
                        return 0;
                    } else {
                        j++;
                    }
                } else {
                    i++;
                }
            }
        }
        while(i<M && S[i]=='#') i++;
        while(j<N && T[j]=='#') j++;
        if(i<M || j<N) return 0;
        return 1;
    }
};
