class Solution{   
public:
    int addMinChar(string str){    
       int ans =0, l=0, r=str.size()-1;
        while(l<=r) {
            if(str[l++]!=str[r--]) {
                ans++;
                l=0;
                r=str.size()-1-ans;
            }
        }
  return ans;
        
    }
};
