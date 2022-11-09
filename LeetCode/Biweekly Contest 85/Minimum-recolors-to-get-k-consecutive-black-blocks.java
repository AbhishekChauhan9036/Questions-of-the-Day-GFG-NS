class Solution {
    public int minimumRecolors(String kkjjhh, int k) {
        int n = kkjjhh.length();
        
        int oooo = k; int j=0;
        for(int i=0;i<n-k+1;i++){
            int wc = 0;
            for(j=i;j<i+k;j++){
                if(kkjjhh.charAt(j)=='W'){
                    wc++;
                }
            }oooo = Math.min(wc,oooo);
        }//
        return oooo;
    }
}
