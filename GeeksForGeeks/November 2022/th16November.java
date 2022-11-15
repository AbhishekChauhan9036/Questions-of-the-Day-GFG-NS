
class Solution {
    
    private static int getBeauty(int st, String s, int n)
    {
        int mem[] = new int[26];
        
        int ans = 0;
        
        for(int i=st; i<n; i++)
        {
            char ch = s.charAt(i);
            
            mem[ch-'a']++;
            
            int min=Integer.MAX_VALUE, max=Integer.MIN_VALUE;
            
            for(int j=0; j<26; j++)
            {
                if(mem[j]>0)
                {
                    if(min>mem[j]) min = mem[j];
                    if(max<mem[j]) max = mem[j];
                }
            }
            
            ans += max - min;
        }
        
        return ans;
    }
    
    public static int beautySum(String s) {
        
        int ans = 0;
        int n = s.length();
        
        for(int i=0; i<n; i++)
        {
            ans += getBeauty(i, s, n);
        }
        
        return ans;
        
        
    }
}