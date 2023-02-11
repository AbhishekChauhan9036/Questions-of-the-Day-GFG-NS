class Solution {
    public static int getMinimumDays(int n, String S, int[] P) {
        // code here
        char s[] = S.toCharArray();
        Set<Integer> set = new HashSet<>();
        for(int i = 0; i<n-1; i++)
            if(s[i]==s[i+1])
                set.add(i);
        if(set.size() == 0) return 0;
        for(int i = 0; i<P.length; i++) {
            set.remove(P[i]);
            set.remove(P[i]-1);
            if(set.size() == 0) return i+1;
        }
        return n;
    }
}
