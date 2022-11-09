
//User function Template for Java



class Complete{
    
   
    // Function for finding maximum and value pair
    public static int maximizeSum (int arr[], int n) {
        HashMap<Integer, Integer> h = new HashMap<>();
        for(int i = 0 ; i < n ; i ++){
            if(!h.containsKey(arr[i]))h.put(arr[i], 1);
            else {
                int curr = h.get(arr[i]);
                h.put(arr[i], curr + 1);
            }
        }
        // System.out.println(h);
        ArrayList<Integer> ar = new ArrayList<>();
        for(int i = n-1 ; i >= 0 ; i --){
            while(h.get(arr[i]) > 0){
                if(h.containsKey(arr[i]-1) && h.get(arr[i]-1) > 0){
                    ar.add(arr[i]);
                    int curr1 = h.get(arr[i]);
                    h.put(arr[i], curr1 - 1);
                    int curr2 = h.get(arr[i]-1);
                    h.put(arr[i]-1, curr2 -1);
                }
                else {
                    ar.add(arr[i]);
                    int curr = h.get(arr[i]);
                    h.put(arr[i], curr-1);
                }
            }
        }
        int res = 0;
        // System.out.print("arr = ");
        for(int i: ar) {
            // System.out.print(i+" ");
            res += i;
        }
        // System.out.println();
        return res;
    }
    
    
}
