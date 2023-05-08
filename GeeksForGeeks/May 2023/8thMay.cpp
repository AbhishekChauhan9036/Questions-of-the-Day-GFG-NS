class Solution{
    public:
        int modulo(string s,int m){
        int ans=0;
        int base=1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                ans=(ans+base)%m;
            }
            base=(base*2)%m;
        }
        return ans;
    }
};
