//.........................
class Solution {
    public int mostFrequentEven(int[] nums) {
        Arrays.sort(nums);
        if(nums.length==1) return nums[0];
        Map<Integer, Integer> m = new HashMap();
        for(int i=0;i<nums.length;i++){
            if(nums[i]%2==0)
              m.put(i, m.getOrDefault(i,0)+1);

        }

        for(int i=0;i<m.size()-1;i++){
            if(m.get(i)>m.get(i+1)){
                return m.get(i);
            }

        }
        return -1;

    }
}