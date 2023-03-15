class Solution{
    //Complete the function and return minimum number of operations
    public:
    int specialPalindrome(string s1, string s2){
        if(s2.size()>s1.size()){
            return -1;
        }
        int ans=1e9;
        for(int i=0;i<=s1.size()-s2.size();i++){
            int r=i;
            int count1=0,count2=0;
            string str=s1;
            for(int j=0;j<s2.size();j++){
                if(s1[r]!=s2[j]) count1++;
                str[r++]=s2[j];
            }
            bool check=1;
            for(int j=0;j<str.size()/2;j++){
                if(j>=i&& str.size()-j-1<i+s2.size()){
                if(str[j]!=str[str.size()-j-1]) {
                    check=0;
                    break;
                };}
                else{
                    if(str[j]!=str[str.size()-j-1]) count2++;
                }
            }
            if(check)
            ans=min(ans,count2+count1);
        }
        if(ans==1e9)return -1;
        return ans;
    }
};
