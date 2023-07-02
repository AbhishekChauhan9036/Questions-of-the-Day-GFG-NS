
class Solution{
public:
   int maxIndexDiff(int arr[], int n) {
        // code here
        int left=0, right=n-1;
        int maxDiff=0;
        while(left<right)
        {
            if(arr[left]<=arr[right])
            {
                maxDiff=max(maxDiff, right-left);
                left++;
                right=n-1;
            }
            else
            right--;
        }
        return maxDiff;
    }

};
