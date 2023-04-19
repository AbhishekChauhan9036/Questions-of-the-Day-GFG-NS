class Solution{
    public:
    bool wifiRange(int N, string S, int X){
            int len = S.size();
        int j = -1;
        for(int i=0; i<len; i++){
            if(S[i]=='1'){
                if(i-j-1>X) return false;
                j=i+X;
            }
        }
        if(j>=len-1) return true;
        return false;
    }
};
