
class Solution
{
   public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int si, int ei)
    {
        if(si>=ei)return;
        int mid=partition(arr,si,ei);
        quickSort(arr,si,mid-1);
        quickSort(arr,mid+1,ei);
        return;
        // code here
    }
    
    public:
    int partition (int arr[], int si, int ei)
    {
        int a=arr[ei];
        int in=0;
        for(int i=si;i<=ei;i++){
            if(arr[i]<a)in++;
        }
        swap(arr[si+in],arr[ei]);
        int i=si,j=si+in;
        for(;i<si+in&&j<=ei;){
            if(arr[i]>=arr[si+in]&&arr[j]<arr[si+in]){
                swap(arr[i],arr[j]);
                i++;j++;
            }
            else if(arr[i]<arr[si+in])i++;
            else j++;
        }
        
        return si+in;
       // Your code here
    }
};
