class Solution{
   public:
    string ReFormatString(string S, int K){
     string ans;
     int n = S.size();
     int i = n-1;
     int count = 0;
     while(i>=0){
         if(count == K){
             ans.push_back('-');
             count = 0;}
         if(isalnum(S[i])){
             ans.push_back(toupper(S[i]));
             count++;}
         i--;}
     reverse(ans.begin(),ans.end());
     if(ans[0]=='-'){
         ans.erase(0,1);}
     return ans;
    }
};