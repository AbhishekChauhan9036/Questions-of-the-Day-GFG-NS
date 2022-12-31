class Solution {

    public int minLaptops(int N, int[] start, int[] end) {

        // code here

        TreeMap<Integer,Integer> m=new TreeMap<>();

        for(int i=0;i<N;i++)

        {

            m.put(start[i],m.getOrDefault(start[i],0)+1);

            m.put(end[i],m.getOrDefault(end[i],0)-1);

        }

        int count=0 , ans=0;

 

        for(int i:m.keySet())

        {

          count+=m.get(i);

         //when the count will be max that many laptop is needed

            ans=Math.max(count , ans);

        }

        return ans;

    }

}
