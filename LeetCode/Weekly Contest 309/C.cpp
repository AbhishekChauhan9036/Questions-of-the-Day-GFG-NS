class Solution { 
public: 
    int longestNiceSubarray(vector<int>& arr1) { 
        int __uyt = arr1.size(); int value = 1; int j = 1, i = 0; 
        while(j<__uyt){ int __uyt = 32; bool check = true; 
            for(int k=j-1;k>=i and __uyt; k--){ 
                if(arr1[j] & arr1[k]){ 
                    check = false; 
                    break; } __uyt--; 
            } 
            if(check){  value = max(value,j-i+1); j++; }else{  i++; } 
        } 
        return value; 
    } 
};