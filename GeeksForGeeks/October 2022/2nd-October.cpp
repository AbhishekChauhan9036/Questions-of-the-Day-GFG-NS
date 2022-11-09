//......................................
class Solution {
public:
    int minChar(string str){
        int n = str.length();
        int i = 0 ; 
        int j = n-1;
        int j2 = j;
        int count = 0;
        while(i < j){
            if(str[i] == str[j]){
                i++;
                j--;
            }
            else{
                count++;
                i = 0 ;
                j2--;
                j = j2;
                
            }
        }
        return count;
    }
};
 