class Solution {
    
    private static boolean isNum(char ch)
    {
        return ch>='0' && ch<='9';
    }
    
    static int checkCompressed(String S, String T) {
        int i = 0, j = 0;
        
        int n = S.length();
        int m = T.length();
        
        while(i<n && j<m)
        {
            if(isNum(T.charAt(j)))
            {
                String ns = "";
                while(j<m && isNum(T.charAt(j)))
                {
                    ns += T.charAt(j++);
                }
                
                int num = Integer.parseInt(ns);
                
                i+=num;
                
            }
            else
            {
                if(T.charAt(j)!=S.charAt(i)) return 0;
                
                i++;
                j++;
                
            }
            
            
        }
        
        return (j==m && i==n) ? 1 : 0;
        
    }
}
