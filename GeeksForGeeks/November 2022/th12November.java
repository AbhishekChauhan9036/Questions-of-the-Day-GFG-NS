class Solution
{
    public int characterReplacement(String s, int k)
    {
        // code here
        int ans = 0;
        Set<Character> set = new LinkedHashSet<>();
        for (int i = 0; i < s.length(); i++) {
            set.add(s.charAt(i));
        }
        for (char ch : set) {
            int j = -1;
            int re = k;
            for (int i = 0; i < s.length(); i++) {
                if (ch != s.charAt(i)) {
                    re--;
                    while (re < 0) {
                        j++;
                        if (s.charAt(j) != ch) {
                            re++;
                        }
                    }
                }
                ans = Math.max(ans, i - j);
            }
        }
        return ans;
    }
}
