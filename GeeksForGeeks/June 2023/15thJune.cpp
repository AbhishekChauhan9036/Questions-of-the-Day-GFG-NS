class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int n=s.size();
        string str;
        str;
        int ans=0,ansl=0,ansr=0;
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(s[l]==s[r]&&l>=0&&r<n){
                if(ans<-l+r+1){
                    ans=-l+r+1;
                    ansl=l;ansr=r;
                }
                l--;r++;
            }
        }
        for(int i=0;i<n;i++){
            int l=i,r=i+1;
            while(s[l]==s[r]&&l>=0&&r<n){
                if(ans<-l+r+1){
                    ans=-l+r+1;
                    ansl=l;ansr=r;
                    
                }
                l--;r++;
            }
        }
        int z=ansl;
        while(z<=ansr){
            str+=s[z++];
        }
        return str;
    }
};
