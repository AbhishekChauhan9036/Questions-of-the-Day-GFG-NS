class Solution
{
    //Function to find maximum of each subarray of size k.
    static ArrayList <Integer> max_of_subarrays(int arr[], int n, int k)
    {
        ArrayList<Integer> a=new ArrayList<>();
        for(int i=0;i<=n-k;i++){
            int max=0;
            for(int j=i;j<k+i;j++){
                if(arr[j]>max){
                    max=arr[j];
                }
            }
            a.add(max);
        }
        return a;
        // Your code here
    }
}