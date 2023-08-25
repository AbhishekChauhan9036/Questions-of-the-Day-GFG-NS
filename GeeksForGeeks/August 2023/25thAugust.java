
class Solution {
    int isPalindrome(String S) {
        // code here
          int n=S.length(),i;
        for(i=0;i<n/2;i++)
        {
            if(S.charAt(i)!= S.charAt(n-1-i))
            {
                return 0;
            }
        }
        return 1;
    }
};

