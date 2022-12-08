class Solution
{
    static ArrayList<Integer> threeDivisors(ArrayList<Long> query, int qn){
        
        int N = 0;
        
        for(long q : query)
        {
            N = Math.max((int)Math.sqrt(q), N);
        }
        
        
        boolean mem[] = new boolean[N+1];
        
        Arrays.fill(mem, true);
        
        for(int i=2; i<=N; i++)
        {
            
            if(mem[i]==true)
            {
                for(int j=2*i; j<=N; j+=i)
                {
                    mem[j]=false;
                }
            }            
            
        }
        
        int csum[] = new int[N+1];
        
        
        for(int i=2; i<=N; i++)
        {
            csum[i] = csum[i-1];
            
            if(mem[i]==true)
            {
                csum[i]++;
            }
            
        }
        
        ArrayList<Integer> ans = new ArrayList<>();
        
        for(long q : query)
        {
            int x = (int)Math.sqrt(q);
            ans.add(csum[x]);
        }
        
        return ans;
    }
}
