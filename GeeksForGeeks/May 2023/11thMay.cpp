
class Solution {
  public:
    int minimumSum(string s) {
        // code here
        int n = s.length();
        vector<char> vec(n,0);
        
        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n-1-i] && s[n-1-i] != '?' && s[i] != '?') return -1;
            vec[i] = s[i]; vec[n-1-i] = s[n-1-i];
        }
        int prev = 0;
        int ans = 0;
        int i =0, j = n-1;
        
        bool flag = false;
        
         for(int i = 0;i<n;i++){
  
        if(s[i] == '?' ){
        s[i] = s[n-1-i];
        }
        }
        i = 0;
        
        while(s[i]=='?') i++;
        while(s[j] == '?')j--;
        i++;
        while(i<=j){
            if(s[i] == '?') s[i] = s[i-1];
            
            ans += abs(s[i-1] - s[i]);
            i++;
        }
        
      
        
        return ans;
    }
};

